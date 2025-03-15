#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    printf("%d",(num&1)>>0);
    for (int i=0;i<=32;i++)
    {
        printf("%d",(num&i+1)>>i)
    }
}