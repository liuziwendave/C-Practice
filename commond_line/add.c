#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
   int i=0;
   int sum=0;
   while(i<argc){
      sum=sum+atoi(argv[i]);
      i++;
   }

   printf("Sum: %d\n", sum);

   return EXIT_SUCCESS;
}
