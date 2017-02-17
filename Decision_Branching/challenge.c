#include <stdio.h>
#include <stdlib.h>
 
void checknum(void);
void processnum(int n);
void disnum(char m);

int main (int argc, char **argv){
   checknum();   
   return EXIT_SUCCESS;
}

void checknum(void){
   int num;
   printf("how many stock do you have: ");
   scanf("%d", &num);
   processnum(num);
}

void processnum(int n){
   if (n>100)
      disnum('a');
   else 
      if(n<10)
	 disnum('b');	 
      else 
	 if((n<=100) && (n>=10))
	    disnum('c');
}

void disnum(char m){
   switch(m){
      case 'a':
	 printf("Sale!!!\n");
      break;
      
      case 'b':
	 printf("Buy!!!\n");
      break;

      case 'c':
	 printf("Hold!!!\n");
      break;
   }
}
