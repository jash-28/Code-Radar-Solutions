#include <stdio.h>
int main()
{
    int a,b,h[100];
    scanf("%d",&a);
    for (int i=0;i<a;i++)
   { 
    scanf("%d",&h[i]);
   }
   int g=h[0],d=-1;
   for (int i=0;i<a;i++){
    if (h[i]<g){
        d=g;
        g=h[i];
    } 
   }
   printf("%d",d);
}