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
    else if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
       if ((a=='i' || a=='a' || a=='e' || a=='o' || a=='u') || (a=='I' || a=='A' || a=='E' || a=='O' || a=='U') )
       {
         printf("Vowel");
       }
       else{
        printf("Consonant");
       }
    }

    else
    {
        printf("Special Character");
    }
    return 0;
}