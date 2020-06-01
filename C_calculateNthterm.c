#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int main() {
    int n, a, b, c,sum=0;
  scanf("%d \n",&n);
scanf("%d%d%d",&a,&b,&c);
for(int i=4;i<=n;i++)
{
sum=sum+a+b+c;
a=b;
b=c;
c=sum;
}
printf("%d",sum);
    return 0;
}

