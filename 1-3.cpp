#include <stdio.h>
 
int main()
{
int c,d,i,g,sum,k;
  char a,b,e,f;
  printf("�밴��ʽҪ����������Ż��͹���")�� 
	scanf("%c %c %d %d\n",&a,&b,&c,&d) ;
	scanf("%c %c %d",&e,&f,&g);
	if(a!=e) printf("û���������\n");
	if(f!=b) printf("û�иû���");
	else {
	  if(d<g) {printf("ֻ�ܹ���%d������,�븶��",c); sum=c*d;}
	  else {sum=g*c;}
    
	  do{
	scanf("%d",&k);
	sum=sum-k;
    } while(sum>0);
    sum=-sum;
    if (sum == 0) 
	  printf("��������"); 
    else 
	  printf("������Ǯ%dԪ",sum);
    return 0;}
}
