#include <stdio.h>
int main()
{
    char a;
    int tem=a;
    scanf("%c",&a);
    if (a>='0' && a<='9')
    {
        printf("Digit");
    }
    elseif (a='i' || a='a' || a='e' || a='o' || a='u' )
    {
        printf("Vowel");
    }
    elseif ((tem>=65 && tem<=90) || (tem>=97 && tem<=122))
    {
        printf("Consonant");
    }
    return 0;
}