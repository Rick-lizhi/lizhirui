#include <stdio.h>
int main()   
{
	int a,b;
	printf("�������ܼ�");
	scanf("%d",&a);
	printf("������Ͷ��1Ԫ2Ԫ��5Ԫֽ��");
	do{
	scanf("%d",&b);
	a=a-b;
    } while(a>0);
    a=-a;
    if (a == 0) 
	  printf("��������"); 
    else 
	  printf("������Ǯ%dԪ",a);
    return 0;
}
