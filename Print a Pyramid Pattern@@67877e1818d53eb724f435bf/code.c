#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int tem1=N-1;
    int tem2=1;
    for (int i=0; i<N; i++){
        for (int j=0; j<tem1;j++){
            printf(" ");
        }
        for(int k=0; k<tem2;k++){
            printf("*");
        }
        for (int j=0; j<tem1;j++){
            printf(" ");
        }
        printf("\n");
        tem1-=1;
        tem2+=2;
    }
    return 0;

}