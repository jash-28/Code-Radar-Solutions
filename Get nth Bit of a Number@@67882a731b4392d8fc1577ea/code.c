#include <stdio.h> 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if (m & (1<<(n-1)))
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
}
