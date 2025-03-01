#include <stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
    for (k=n-1;k<=0;k--)
    {
        printf(" ");
    }
    for (j=1;j<=2*k-1;j++)
    {
        printf("*");   
    }
    printf("\n");
    }
    return 0;
}