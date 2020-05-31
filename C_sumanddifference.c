#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,dif;
    float c,d,sum1,dif1;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    sum=a+b;
    dif=a-b;
    sum1=c+d;
    dif1=c-d;
    printf("%d %d \n",sum,dif);
    printf("%0.1f %0.1f",sum1,dif1);
    return 0;
}

