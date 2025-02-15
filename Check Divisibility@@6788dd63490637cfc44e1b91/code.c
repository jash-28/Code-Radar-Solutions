#include <stdio.h>
int main()
{
    int e;
    scanf("%d",&e);
    if ((e%5==0)&&(e%11==0))
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}