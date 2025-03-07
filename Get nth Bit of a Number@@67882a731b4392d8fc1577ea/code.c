#include <stdio.h> 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if (n & (1<<m))
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
}
