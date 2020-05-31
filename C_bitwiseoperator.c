#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int main()
 {
    int n,k,i,j,maxand=0,maxor=0,maxxor=0;
    scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
    for(j=(i+1);j<=n;j++)
    {
        if((i&j)>maxand && (i&j)<k)
        {
            maxand=i&j;
        }
        if((i|j)>maxor && (i|j)<k)
        {
            maxor=i|j;
        }
        if((i^j)>maxxor && (i^j)<k)
        {
            maxxor=i^j;
        }
    }
}
printf("%d\n%d\n%d\n",maxand,maxor,maxxor);
    return 0;
}
