#include <stdio.h>

int main()
{
	int a,b,c,number=0,count=0;
	for(a=1;a<5;a++){
	                  for(b=1;b<5;b++){
	                                    for(c=1;c<5;c++){
		if(a!=b&&a!=c&&b!=c)
		{	number=a*100+b*10+c;
		    printf("%d\t",number);
		    count++;
		}
	} 
	}
	}
      printf("共有%d个数",count);
	return 0;
}
