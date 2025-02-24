#include <stdio.h>
int main ()
{
    int g;
    scanf("%d",&g);
    switch(g)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid");
        
    }
}