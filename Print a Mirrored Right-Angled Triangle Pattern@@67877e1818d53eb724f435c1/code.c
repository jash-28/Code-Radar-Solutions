#include <stdio.h>
 
int main() 
{
  int Rows, i, j;
  scanf("%d", &Rows);
  for ( i = 1 ; i <= Rows; i++ ) 
  {
      for ( j = 1 ; j <= Rows; j++ ) 
      {
      	if(j <= Rows-i)
      	{
          printf(" ");
	}
	else
	{
	  printf("*");		  	
	}         
      }
      printf("\n");
  }
  return 0;
}