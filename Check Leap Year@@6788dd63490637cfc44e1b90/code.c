#include <stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    if (r%4==0)
    {
        printf("Leap Year");

    }
    else 
    {
        printf("Not a Leap Year");
    }
    return 0;
}