#include <stdio.h>
int main()
{
    int i,j,a,num=1;
    scanf("%d",&a);
    for (i=1;i<=a;++i)
    {
        for (j=1;j<=i;++j)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}