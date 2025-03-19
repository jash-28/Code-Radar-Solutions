#include <stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    N=k+64;
    for (int i=N; i>0;i--)
    {
        for (int j=N-i; j>=0;j--)
        {
            printf("%c",j);
        }
        printf("\n");

    }
}