#include <stdio.h>
int main()
{
    int N, y=0;
    scanf("%d",&N);
    for (int i=N; i>0;i--)
    {
        
        for (int j=N-i; j>=0;j--)
        {
            
            printf("%d ",y);
        }
        printf("\n");

    }
}