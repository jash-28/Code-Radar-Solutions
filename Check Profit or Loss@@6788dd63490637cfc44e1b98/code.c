#include <stdio.h>
int main()
{
    int pv,sv;
    scanf("%d %d",&pv,&sv);
    if (pv>sv)
    {
        printf("Profit");
    }
    else if(sv>pv)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}