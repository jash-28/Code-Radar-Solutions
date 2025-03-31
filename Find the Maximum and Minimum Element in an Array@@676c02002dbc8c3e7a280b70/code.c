#include <stdio.h>
int main()
{
    int y[10],n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
int max=y[0];
int min=y[0];
for (i=0;i<n;i++)
{
    if (y[i]>max)
    {
        max=y[i];
    }
for (i=0;i<n;i++)
{
    if (y[i]<min)
    {
        min=y[i];
    }
}

}
printf("%d",min);
printf("%d",max);
return
}