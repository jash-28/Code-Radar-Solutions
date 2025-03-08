#include <stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    for (int i=32;i>0;i++)
    {
        if (n&(1>>i))
        count++;
    }
    printf("%d",count);


}