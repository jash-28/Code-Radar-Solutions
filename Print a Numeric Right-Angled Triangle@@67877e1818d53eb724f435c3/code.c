#include <stdio.h>
int main()
{
    int i,j,a ;
    scanf("%d",&a);
    for (i=1; i<=a;++i)
    {
        for ( j=2; j<=a;++j)
        {
            
            printf("%d ",i,j);
        }
        printf("\n");
    }
    return 0;
}