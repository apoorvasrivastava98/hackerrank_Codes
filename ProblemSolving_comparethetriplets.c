#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

// Complete the compareTriplets function below.

int main()
{
int i,a[3],b[3],c[2],x=0,y=0;
for(i=0;i<3;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<3;i++)
{
    if (a[i]>b[i])
    {
      x=x+1;
    }
    else if(a[i]<b[i])
    {
        y=y+1;
    } 
}
c[0]=x;
c[1]=y;
for(i=0;i<2;i++)
{
    printf("%d ",c[i]);
}
}
