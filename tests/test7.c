#include <stdlib.h>
#include <stdio.h>

int main()
{

  printf("Running test 7\n");

  char * ptr_array[1024];
  int * other_ptr_array[1024];

  int i;
  for ( i = 0; i < 1024; i++ )
  {
    ptr_array[i] = ( char * ) malloc ( 1024 ); 
    
    ptr_array[i] = ptr_array[i];
  }

  for ( i = 0; i < 1024; i++ )
  {
    other_ptr_array[i] = malloc ( 1024 ); 
    
    other_ptr_array[i] = other_ptr_array[i];
  }

  for ( i = 0; i < 1024; i++ )
  {
    if( i % 2 == 0 )
    {
      free( other_ptr_array[i] );
    }
  }

  for ( i = 0; i < 1024; i++ )
  {
    if( i % 2 == 0 )
    {
      free( ptr_array[i] );
    }
  }

  return 0;
}