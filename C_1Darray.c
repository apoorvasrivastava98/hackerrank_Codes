#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int  i,n;
  long int sum=0;
  scanf("%d \n",&n);
  int *arr = (int*)malloc(n * sizeof(int));

for(i=0;i<n;i++)
{
    scanf("%d ",&arr[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
printf("%ld",sum);
    return 0;
}

