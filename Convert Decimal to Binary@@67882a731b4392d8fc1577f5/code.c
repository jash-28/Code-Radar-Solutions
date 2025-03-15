#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i=0;i<=32;i++)
    {
        printf("%d",(num >> i)&1);
    }
}

