#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d",1+j);
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%d",1+j);
        }
 printf("\n");   }
}