#include <stdio.h>

int main()
{
	int d;
	double c=0.0,a=1.0,b=2.0,e=1.0;
	for(d=1;d<=20;d++)
	{
		c=(b/a)+c;
		b=a+b;
		a=b-a;
	}
	printf("�����е�ǰ20��ĺ�Ϊ:%lf",c);
	
	return 0;
 } 
