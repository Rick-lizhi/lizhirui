#include <stdio.h>
 
int main()
{
int c,d,i,g,sum,k;
  char a,b,e,f;
  printf("请按格式要求自行输入放货和购买")； 
	scanf("%c %c %d %d\n",&a,&b,&c,&d) ;
	scanf("%c %c %d",&e,&f,&g);
	if(a!=e) printf("没有所需货物\n");
	if(f!=b) printf("没有该货道");
	else {
	  if(d<g) {printf("只能购买%d个货物,请付款",c); sum=c*d;}
	  else {sum=g*c;}
    
	  do{
	scanf("%d",&k);
	sum=sum-k;
    } while(sum>0);
    sum=-sum;
    if (sum == 0) 
	  printf("不用找零"); 
    else 
	  printf("找您零钱%d元",sum);
    return 0;}
}
