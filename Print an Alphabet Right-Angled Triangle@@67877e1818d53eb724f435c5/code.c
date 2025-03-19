#include <stdio.h>
int main()
{
    int k,N;
    scanf("%d",&k);
    N=k+64;
    for (int i=k; i>0;i--)
    {
        for (int j=k-i; j>=0;j--)
        {
            printf("%c",j);
        }
        printf("\n");

    }
}