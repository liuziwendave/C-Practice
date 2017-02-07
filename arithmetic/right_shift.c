#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char **argv){

   int x=8;
   int y=4;

   puts("x=8,y=4");

   int result;
   result=x >> 1;
   printf("x>>1=%d\n",result);

   result=y<<1;
   printf("y<<1=%d\n", result);


   return EXIT_SUCCESS;
}
