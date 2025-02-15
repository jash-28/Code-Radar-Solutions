#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int space=N-2;
        for(int j=0; j<N;j++){
            if(i==0 || i==N-1){
                for(int k=0 ;k<N;k++){
                    printf("*");
                }
                    printf("\n");
                }
            else{
                printf("*");
                for (int l; l<space ; l++){
                    printf(" ");
                }
                printf("*");
                printf("\n");
                
        }
    }
}