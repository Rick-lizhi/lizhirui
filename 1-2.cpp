#include <stdio.h>
int main()   
{
	int a,b;
	printf("请输入总价");
	scanf("%d",&a);
	printf("请依次投入1元2元或5元纸币");
	do{
	scanf("%d",&b);
	a=a-b;
    } while(a>0);
    a=-a;
    if (a == 0) 
	  printf("不用找零"); 
    else 
	  printf("找您零钱%d元",a);
    return 0;
}
