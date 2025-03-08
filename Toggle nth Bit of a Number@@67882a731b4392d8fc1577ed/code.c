#include <stdio.h>
int main()
{
    int num,n,z;
    scanf("%d %d",&num,&n);
    z= num  ^ (1<<n);
    printf("%d",z);
}