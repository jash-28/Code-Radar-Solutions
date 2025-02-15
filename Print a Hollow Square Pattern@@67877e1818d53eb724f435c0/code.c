// Your code here...
#include <stdio.h>
int main()
{
    int N;
    int space=N-2;
    scanf("%d",&N);
    for (int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            if (i==j){
                for(int k=0 ;k<N;k++){
                    printf("* ");}
                    printf("\n");
                }
            else{
                printf("* ");
                for (int l; l<space ; l++){
                    printf(" ");
                }
                printf("*");
                
            }
        }
    }
}
    