#include <stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d",&n,&m);
    k= n & ~ (1<<m);
    printf("%d",k);
}