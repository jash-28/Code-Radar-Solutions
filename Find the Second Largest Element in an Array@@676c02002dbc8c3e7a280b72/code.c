#include <stdio.h>
#include<limits.h>
int main()
{
    int a,b,h[100];
    scanf("%d",&a);
    for (int i=0;i<a;i++)
   { 
    scanf("%d",&h[i]);
   }
   int g=h[0],d=INT_MIN;
   for (int i=0;i<a;i++){
    if (h[i]>g){
        d=g;
        g=h[i];
    }
    else if(h[i]>d && h[i]!=g){
        d=h[i];
    }
   }
   printf("%d",d);
}