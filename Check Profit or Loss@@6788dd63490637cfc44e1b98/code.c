#include <stdio.h>
int main()
{
    int pv,sv;
    scanf("%d %d",&pv,&sv);
    if (sv>pv)
    {
        printf("Profit");
    }
    else if(pv>sv)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}