#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,sum=0,r;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        sum=sum+r;
       
    }
     printf("%d",sum);
}

