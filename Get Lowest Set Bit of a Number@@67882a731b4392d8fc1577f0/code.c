#include <stdio.h>

int main() 
{
    int n, pos=0;
    scanf("%d",&t);
    while( t & 1 == 0)
    t>>=1;
    pos ++;
    printf("%d",pos);
}