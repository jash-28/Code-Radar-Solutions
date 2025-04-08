#include <stdio.h>

int main() {
    int a[10], d, n,i,r;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]>a[i+1] && a[i]>a[i-1])

           r= a[i];
           printf("%d",r);
        else 
    {
        printf("-1");
    }
       
    }
    
    

}