#include <stdio.h>
int main()
{
    int s,d;
    char r;
    scanf("%d %d %c",&s,&d,&r);
    switch(r)
    {
        case '+' :
        printf("%d",s+d);
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



