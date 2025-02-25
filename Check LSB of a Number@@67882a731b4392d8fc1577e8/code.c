#include <stdio.h>
int main()
{
    int e;
    scanf("%d %d",&e);
    if (e&1)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;

}