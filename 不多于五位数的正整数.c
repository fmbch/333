#include <stdio.h>
int main()
{
    int i, a, b, c, d, e;
	printf("请输入一个数: ");
    scanf("%d", &i);
    while ( i< 0 || i > 99999){
        printf("你输入的数值不符，请重新输入: ");
        scanf("%d", &i);
    }
    a = i / 10000;
    b = i / 1000;
    c = i / 100;
	d = i / 10;
    e = i ;
    if (i >= 10000 && i <= 999999){
        printf("%d 是五位数\n", i);
        printf("%d %d %d %d %d\n", a, b-a*10, c-b*10, d-c*10, e-d*10);
        printf("%d %d %d %d %d\n",e-d*10 , d-c*10, c-b*10, b-a*10, a);
    }
    else if (i>= 1000 && i <= 9999){
        printf("%d 是四位数\n", i);
        printf("%d %d %d %d\n", b, c-b*10, d-c*10,e-d*10 );
        printf("%d %d %d %d\n", e-d*10, d-c*10, c-b*10, b);
    }
    else if (i>= 100 && i <= 999){
        printf("%d 是三位数\n", i);
        printf("%d %d %d\n", c, d-c*10, e-d*10);
        printf("%d %d %d\n",e-d*10 , d-c*10, c);
    }
	else if (i >= 10 && i <= 99){
		printf("%d 是两位数\n", i);
        printf("%d %d\n", d, e-d*10);
        printf("%d %d\n", e-d*10, d);
	}
    else{
        printf("%d 是一位数\n", i);
        printf("%d\n", i);
    }
    return 0;
}

