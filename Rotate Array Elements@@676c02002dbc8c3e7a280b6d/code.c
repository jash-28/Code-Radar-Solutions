#include <stdio.h>
int main()
{
    int n,p,i;
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    scanf("%d",&p);
    for(i=n-p;i<n;i++)
    {
        printf("%d\n",t[i]);
    }
    for(i=0;i<n-p;i++)
    {
        printf("%d\n",t[i]);
    }
    return 0;
}