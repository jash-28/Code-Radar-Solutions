#include <stdio.h>
int main()
{
    int g,h;
    scanf("%d %d",&g,&h);
    if(g<0 && h<0)
    {
        printf("Same Sign");
    }
    else if (g>0 && h>0)
    {
        printf("Same Sign");
    }
    else if (g==0 && h==0)
    {
        printf("Same Sign");
    }
    else 
    {
        printf("Different Sign");
    }
    return 0;
    
}

