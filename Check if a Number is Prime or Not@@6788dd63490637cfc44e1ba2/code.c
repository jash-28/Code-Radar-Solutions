#include <stdio.h>
int main()
{
    int g ,count=0;
    scanf("%d",&g);
    for(int i=1; i=g ;i++)
    { if (g/i==0)
        count++;
    }
    if (count==2)
    {
        printf("Prime");
    }    
    else
    {
        printf("Not Prime");
    }
return 0;
}