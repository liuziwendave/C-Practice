#include <stdio.h>
#include <stdlib.h>

#define x 9
#define y 10

int main (int argc, char **argv){

   int sum, difference, product, division, modulus;
   sum=x+y;
   difference=x-y;
   product=x*y;
   modulus=x%y;
   division=x/y;

   printf("If A=9,and B=10, then the sum is %d\n",sum);
   printf("Difference=%d\n",difference);
   printf("Product=%d\n",product);
   printf("Modulous=%d\n",modulus);
   printf("Division=%d\n",division);

puts("----------------------------------------------");
//Important part, differences between ++x and x++;

   int a;
   a=1;
   
   printf("a=%d\n",a);
   printf("++a=%d\n",++a);
   printf("a=%d\n",a);

puts("-------------------------------------------------");

   a=1;
   printf("a=%d\n",a);
   printf("a++=%d\n",a++);
   printf("a=%d\n",a);

   return EXIT_SUCCESS;
}
