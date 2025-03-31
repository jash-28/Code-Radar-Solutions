#include <stdio.h>
int main()
{
    int k[50], n,evencount=0,oddcount=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<n;i++)
    { 
        if (k[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
printf("%d ",evencount);
printf("%d",oddcount);
    return 0;
}
