#include <stdio.h>
int main()
{
    int N,s;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        s=i%2==0 ? 0:1;
        for (int j=0;j<i;j++){
            printf("%d ",s);
        }
        printf("\n");
    }
}