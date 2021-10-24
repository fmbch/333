#include<stdio.h>
void A(int *p1,int *p2);
void B(int *pa,int *pb,int *pc);
void A(int *p1,int *p2)
{
	int temp;
	if( *p1<*p2)
	{
	  temp=*p1;
	  *p1=*p2;
	  *p2=temp;	   
	}	 
}
void B(int *pa,int *pb,int *pc)
{
	if(*pa<*pb)  
	{
		A(pa,pb);
	}
	if(*pa<*pc)  
	{
		A(pa,pc);
	}
	if(*pb<*pc)  
	{
		A(pb,pc);
	}	
}
int main()
{
	int a,b,c;
	int *pa=&a,*pb=&b,*pc=&c;
	printf("请输入3个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	B(pa,pb,pc); 
	printf("从小到大排：\n%d %d %d\n",c,b,a);
	
	return 0;
 } 
