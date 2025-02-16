#include <stdio.h>
 
int main() 
{
  int Rows, i, j;
  scanf("%d", &Rows);
  for ( i = 0 ; i < Rows; i++ ) 
  {
      for ( j = 0 ; j < Rows; j++ ) 
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