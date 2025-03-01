#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=n-1;i<=0;i--)
    {
        printf(" ");
    }
    for (j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    return 0;
}