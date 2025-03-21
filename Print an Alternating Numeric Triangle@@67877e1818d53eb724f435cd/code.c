#include <stdio.h>
int main()
{
    int N,s;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        
        for (int j=0;j<i;j++){
            s=(j%i==0)? 1:0;
            printf("%d ",s);
        }
        printf("\n");
    }
}