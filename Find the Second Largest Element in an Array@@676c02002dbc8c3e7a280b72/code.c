#include <stdio.h>
int main()
{
    int a,b,h[100],i;
    scanf("%d",&a);
    for (i=0;i<a;i++)
   { scanf("%d",&h[i]);}
   printf("%d",h[a-2]);
   int g=a[0],d=0;
   for (i=0,i<a;i++)
   {
    if h[i]<g;
    {
        d=g;
        g=h[i];
    } 
   }
   printf("%d",d);
}