#include <stdio.h>
int main()
{
    int N, y=1;
    scanf("%d",&N);
    for (int i=N; i>0;i--)
    {
        for (int j=N-i; j>=0;j--)
        {
            y++;
            printf("%d ",y);
        }
        printf("\n");

    }
}