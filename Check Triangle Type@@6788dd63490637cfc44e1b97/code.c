#include <stdio.h>
int main()
{
    int d,f,g;
    scanf("%d %d %d",&d,&f,&g);
    if (d==g && d==f && g==f)
    {
        printf("Equilateral");
    }
    else if (d==f || d==g || g==f)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
    return 0;
}