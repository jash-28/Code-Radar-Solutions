#include <stdio.h>
int main()
{
    int d,f,g;
    scanf("%d %d %d",&d,&f,&g);
    if (d==g && d==f && g==f)
    {
        printf("Equilateral");
    }
    else if (d==g && d==f || g==f && g==d || f==d && f==g )
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
}