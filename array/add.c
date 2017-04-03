#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(int argc,char **argv){
   int arr[MAX];
   printf("Input 5 numbers: ");

   int i=0;
   int sum=0;
   while(i<MAX){
      scanf("%d", &arr[i]);
      sum=sum+i;
      i++;
   }

   printf("Sum: %d\n", sum);


   return EXIT_SUCCESS;
}
