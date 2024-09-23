#include <stdio.h>
int main()   
{int c,d,i;
  char a,b;
    printf("请依次输入货物 摆放通道 单价 数量\n"); 
	scanf("%c %c %d %d",&a,&b,&c,&d) ;
	printf("%c:",b);
	for (i = 1; i <= d; ++i) 
	{printf("%c",a) ;
	}
	printf(" %d",c);
}
