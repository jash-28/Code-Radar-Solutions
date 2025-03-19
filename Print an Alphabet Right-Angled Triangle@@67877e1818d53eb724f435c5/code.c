#include <stdio.h>
int main()
{
    int N+64;
    scanf("%d",&N);
    for (int i=N; i>0;i--)
    {
        for (int j=N-i; j>=0;j--)
        {
            printf("%c",j);
        }
        printf("\n");

    }
}