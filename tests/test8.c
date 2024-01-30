#include <stdlib.h>
#include <stdio.h>

int main()
{

  printf("Running test 8\n");
  int i;
  int * ptr[10];
  for ( i = 0; i < 10; i++ )
  {
    ptr[i] = (int*) malloc ( 478975588 );
  }

  for ( i = 0; i < 10; i++ )
  {
    *ptr[i] = 1;
  }

  for ( i = 0; i < 10; i++ )
  {
    if( i % 2 == 0 )
    {
      free( ptr[i] );
    }
  }

  return 0;
}