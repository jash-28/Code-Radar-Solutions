#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        int index = abs(a[i]);
        if(a[index - 1] < 0) {
            printf("%d\n", index);
            break;
        }
        a[index - 1] = -a[index - 1];
    }

    return 0;
}