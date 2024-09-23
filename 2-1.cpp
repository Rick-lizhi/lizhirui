#include <stdio.h>
int my_strcmp(const char *str1, const char *str2) {

    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}
int main()
{
	printf("您好，请按要求格式自行放货和购买，放货结束和购买结束时请回车加END表示结束"); 
char a[5];
int b[100]={100},c[100],d[100]={0},e,f,k,i,sum=0;//sum 忘记初始值  d忘记初始值 
   i=6;
  do {
  scanf("%s",&a);
  if(my_strcmp("END",a)==0) break;
  scanf(" %d %d %d",&b[i],&c[i],&d[i]);
  if (b[i]==1) {d[1]=d[1]+d[i]; c[1]=c[i]; }
  	else if(b[i]==2){d[2]=d[2]+d[i]; c[2]=c[i]; }
  	else if(b[i]==3){d[3]=d[3]+d[i]; c[3]=c[i]; }
  	else if(b[i]==4){d[4]=d[4]+d[i]; c[4]=c[i]; }
  	else if(b[i]==5){d[5]=d[5]+d[i]; c[5]=c[i]; }
	  i++;}
  while(i<=100);
  while(i<100){
  	scanf("%s",&a);
  	if(my_strcmp( a,"END")==0) break;
  	scanf(" %d %d",&e,&f);//开始找不到对应关系怎么表示，然后想用a作为标志 ，最后想到b ,不知道Switch只能是常量，反应了半天 这里之前%d后加了/n会导致“没有该货道”滞后出现，不明所以 
  	if (e==1) {if (d[1]<f) {printf("1号通道%s已售罄,只能提供%d个",a,d[1]); sum=c[1]*d[1]+sum;} else sum=c[1] *f+sum; d[1]=d[1]-f ;}
  	else if(e==2){if (d[2]<f) {printf("2号通道%s已售罄,只能提供%d个",a,d[2]); sum=c[2]*d[2]+sum;} else sum=c[2] *f+sum; d[2]=d[2]-f ;}
  	else if(e==3) {if (d[3]<f) {printf("3号通道%s已售罄,只能提供%d个",a,d[3]); sum=c[3]*d[3]+sum;} else sum=c[3] *f+sum; d[3]=d[3]-f ;}
  	else if(e==4){if (d[4]<f) {printf("4号通道%s已售罄,只能提供%d个",a,d[4]); sum=c[4]*d[4]+sum;} else sum=c[4] *f+sum; d[4]=d[4]-f ;}
  	else if(e==5){if (d[5]<f) {printf("5号通道%s已售罄,只能提供%d个",a,d[5]); sum=c[5]*d[5]+sum;} else sum=c[5] *f+sum; d[5]=d[5]-f ;}
  
  	     else printf("没有该货道或该货道无%s货",a); 
  	 };//任何地方都可能出现问题！ 
 
  do{
	scanf("%d",&k);
	sum=sum-k;
    } while(sum>0);
    sum=-sum;
    if (sum == 0) 
	  printf("不用找零\n"); 
    else 
	  printf("找您零钱%d元\n",sum);
	printf("输入任意数字退出"); 
	scanf("%s",a); 
    return 0;
}
