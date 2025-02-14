#include <stdio.h>
int main()
{
    int e;
    scanf("%d %d",&e);
    if(e==0)
    {
        printf("Zero");
    }
    else if(e>0)
    {
        printf("Positive");
    }
    else if(e<0)
    {
        printf("Negative");
    }
    return 0;
}