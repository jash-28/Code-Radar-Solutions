#include <stdio.h>

int main() 
{
    int t, position=0;
    scanf("%d",&t);
    while(t & 1 == 0)
    position ++;
    t=t>>1;
    printf("%d",position);
}