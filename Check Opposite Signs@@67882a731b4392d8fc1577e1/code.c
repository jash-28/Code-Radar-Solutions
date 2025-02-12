#include <stdio.h>
int main()
{
    int e,r;
    scanf("%d %d",&e,&r);
    if((e>0)&&(r<0)||(e<0)&&(r>0))
    {
        printf("True");

    }
    else
    {
        printf("False");
    }
}