#include <stdio.h>
int main()
{
    int s,d,c;
    char r;
    scanf("%d %d %d %c",&s,&c,&d,&r);
    switch(r)
    {
        case '+' :
        c=s+d;
        printf("%d",c);
        break;
        case '-' :
        printf("%d",s-d);
        break;
        case '*' :
        printf("%d",s*d);
        break;
        case '/' :
        printf("%d",s/d);
        break;
        default:
        printf("error");
        break;
    }
}



