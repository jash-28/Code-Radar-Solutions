#include <stdio.h>

int main() {
    int a[10], d, n,i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]>a[i+1] && a[i]>a[i-1])
        {
            printf("%d",a[i]);
            return 0;
        }
    }
    printf("-1");

}