#include <stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    n|=(1<<t);
    printf("%d",n);
}