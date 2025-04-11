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
    for (int i=1;i<l;i++)
    {
        a[s+i]=t[i];
    }
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}