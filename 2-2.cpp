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
	printf("���ã��밴Ҫ���ʽ���зŻ��͹��򣬷Ż������͹������ʱ��س���END��ʾ����"); 
char a[5];
int b[100]={100},c[100],d[100]={0},e,f,k,i,sum=0,g[100]={0};//sum ���ǳ�ʼֵ  d���ǳ�ʼֵ 
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
  	scanf(" %d %d",&e,&f);//��ʼ�Ҳ�����Ӧ��ϵ��ô��ʾ��Ȼ������a��Ϊ��־ ������뵽b ,��֪��Switchֻ���ǳ�������Ӧ�˰��� ����֮ǰ%d�����/n�ᵼ�¡�û�иû������ͺ���֣��������� 
  	if (e==1) {if (d[1]<f) {printf("1��ͨ��%s������,ֻ���ṩ%d��",a,d[1]); sum=c[1]*d[1]+sum;} else sum=c[1] *f+sum; d[1]=d[1]-f; g[1]=g[1]+f;}
  	else if(e==2){if (d[2]<f) {printf("2��ͨ��%s������,ֻ���ṩ%d��",a,d[2]); sum=c[2]*d[2]+sum;} else sum=c[2] *f+sum; d[2]=d[2]-f; g[2]=g[2]+f;}
  	else if(e==3) {if (d[3]<f) {printf("3��ͨ��%s������,ֻ���ṩ%d��",a,d[3]); sum=c[3]*d[3]+sum;} else sum=c[3] *f+sum; d[3]=d[3]-f; g[3]=g[3]+f;}
  	else if(e==4){if (d[4]<f) {printf("4��ͨ��%s������,ֻ���ṩ%d��",a,d[4]); sum=c[4]*d[4]+sum;} else sum=c[4] *f+sum; d[4]=d[4]-f; g[4]=g[4]+f;}
  	else if(e==5){if (d[5]<f) {printf("5��ͨ��%s������,ֻ���ṩ%d��",a,d[5]); sum=c[5]*d[5]+sum;} else sum=c[5] *f+sum; d[5]=d[5]-f; g[5]=g[5]+f;}
  
  	     else printf("û�иû�����û�����%s��",a); 
  	 };//�κεط������ܳ������⣡ 
 
  do{
	scanf("%d",&k);
	sum=sum-k;
    } while(sum>0);
    sum=-sum;
    if (sum == 0) 
	  printf("��������\n"); 
    else 
	  printf("������Ǯ%dԪ\n",sum);
	printf("��Ҫ���ˣ������롰back������������3��\n");
	scanf("%s",&a);
	if (my_strcmp("back",a)==0) {printf("\n���������룺�������� ͨ���� �˻ؼ���,���������˻�ʱ������END\n");for(i=1;i<=3;i++){
	scanf("%s",a); if(my_strcmp(a,"END")==0) break;//���˸��ո� 
	scanf(" %d %d",&e,&f); //����& 
	if (e==1) {if (g[1]<f) {printf("1��ͨ��%sֻ���˻�%d��",a,g[1]); printf("����%dԪ",g[1]*c[1]);} else printf("����%dԪ",f*c[1]); g[1]=g[1]-f;}
  	else if(e==2){if (g[2]<f) {printf("2��ͨ��%sֻ���˻�%d��",a,g[2]); printf("����%dԪ",g[2]*c[2]);} else printf("����%dԪ",f*c[2]);g[2]=g[2]-f;}
  	else if(e==3) {if (g[3]<f) {printf("3��ͨ��%sֻ���˻�%d��",a,g[3]); printf("����%dԪ",g[3]*c[3]);} else printf("����%dԪ",f*c[3]);g[3]=g[3]-f;}
  	else if(e==4){if (g[4]<f) {printf("4��ͨ��%sֻ���˻�%d��",a,g[4]); printf("����%dԪ",g[4]*c[4]);} else printf("����%dԪ",f*c[4]);g[4]=g[4]-f;}
  	else if(e==5){if (g[5]<f) {printf("5��ͨ��%sֻ���˻�%d��",a,g[5]); printf("����%dԪ",g[5]*c[5]);} else printf("����%dԪ",f*c[5]);g[5]=g[5]-f;}
  	  else printf("ȥ���İ�"); }}//������Ҳ������ 
    
	printf("\n�������������˳�"); 
	scanf("%s",a); 
    return 0;
}
