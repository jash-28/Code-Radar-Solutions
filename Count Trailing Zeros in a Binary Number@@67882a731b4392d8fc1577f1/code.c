#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for (int i=32;i>0;i++)
    {
        if (n&(1>>i+1)) break;
        count++;
    }
    printf("%d",count);
}