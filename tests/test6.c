#include <stdlib.h>
#include <stdio.h>

int main()
{

  printf("Running test 6\n");

  char * ptr = ( char * ) malloc ( 65535 );

  char * ptr_array[100];

  int i;
  for ( i = 0; i < 100; i++ )
  {
    ptr_array[i] = ( char * ) malloc ( 24 ); 
    
    ptr_array[i] = ptr_array[i];
  }

  free( ptr );

  for ( i = 0; i < 100; i++ )
  {
    if( i % 2 == 0 )
    {
      free( ptr_array[i] );
    }
  }

  ptr = ( char * ) malloc ( 65535 );
  char * ptr2 = ( char * ) malloc ( 100000000 );
  free( ptr ); 
  free( ptr2 );

  return 0;
}