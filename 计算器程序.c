#include <stdio.h>

long jiecheng(double a);
long jiecheng(double a)
{
	long result;
	if(a>0.0)
	{
		result=a*jiecheng(a-1.0); 
	}
	else
	{
		result=1.0;
	}
	return result;
}
int main()
{
	char ch;
	double a,b;
	printf("�����룺");
	scanf("%lf%c%lf",&a,&ch,&b); 
	switch(ch)
	{
		case '+' : printf("%lf+%lf=%lf",a,b,a+b);break; 
		case '-' : printf("%lf-%lf=%lf",a,b,a-b);break;
		case '*' : printf("%lf*%lf=%lf",a,b,a*b);break;
		case '/' : printf("%lf/%lf=%lf",a,b,a/b);break;
		case '!' : printf("%lf!=%d",a,jiecheng(a));break;
		defaulf: printf("������ĸ�ʽ����");break;
	}	
	return 0;
}
