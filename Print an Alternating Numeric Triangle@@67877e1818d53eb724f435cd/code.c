#include <stdio.h>
int main()
{
    int N,s;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        
        for (int j=1;j<i;j++){
            s=(j%2==0)? 1:0;
            printf("%d ",s);
        }
        printf("\n");
    }
}