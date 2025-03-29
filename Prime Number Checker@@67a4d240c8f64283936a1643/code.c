#include<stdio.h>

void isPrime(int);

void isPrime(int c)
{
    int a,b=0;
    for(a=1;a<=c;a++)
    {
        if(c%a==0)
        {
            b++;
        }
    }
    if(b>2||c==1||c==0)
    {
        return 0;
    }
    else {
        return 1;
    }
}

int main()
{
    int c;
    scanf("%d",&c);
    if(isPrime(c))
    {
        printf("prime");
    }
    else{
        printf("not prime");
    }
}