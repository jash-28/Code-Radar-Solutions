#include <stdio.h>
int main() {
    int num,bit,zeroes;
    scanf("%d", &num);
    for (int i=31;i>=0;i--)
    {
    bit = (num>>i)&1;
    if(bit)
    {
        zeroes = 0;
    }
    if(!zeroes)
    {
    printf("%d",bit);
    }
    }
    return 0;
}