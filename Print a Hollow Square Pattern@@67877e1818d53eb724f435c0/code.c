#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int space = N - 2;

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            // Print full row of stars for the first and last row
            for (int j = 0; j < N; j++) {
                printf("*");
            }
        } else {
            // Print stars with spaces in between
            printf("*");
            for (int j = 0; j < space; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

}