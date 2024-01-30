#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 5\n");

  char * ptr1 = ( char * ) malloc( 1048 );

  free( ptr1 );

  char * ptr2 = ( char * ) malloc( 1024 );

  free( ptr2 );

  char * ptr3 = ( char * ) malloc( 1072 );

  free( ptr3 );

  char * ptr4 = ( char * ) malloc( 1024 );

  free( ptr4 );

  char * ptr5 = ( char * ) malloc( 10481 );

  char * ptr6 = ( char * ) malloc( 36743 );

  char * ptr7 = ( char * ) malloc( 5232 );

  char * ptr8 = ( char * ) malloc( 902499 );

  free( ptr8 );

  free( ptr7 );
  
  free( ptr6 );
  
  free( ptr5 );

  return 0;
}