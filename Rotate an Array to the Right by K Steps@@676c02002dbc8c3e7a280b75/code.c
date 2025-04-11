#include <stdio.h>
int main()
{
    int t[100],a[10],n,s;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    scanf("%d",&s);
    int l=n-s;
    for(int i=0;i<s;i++)
    {
        a[i]=t[n-s+i];

    }

    printf("%d",a[1]);
}