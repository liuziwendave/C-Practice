#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define length 5 //each word length
#define maxage 120
#define num 3// each color word length
#define numname 6//numbers of name
#define teammates 4//numbers of teams


struct person{
	       char firstname[length];
	       char lastname[length];
	       int age;
	       char color[length];
	       float height;

};

char firstnamebank[numname][length]={"Dave","Jonh","Lion","Pitty","Umi","Candy"};
char lastnamebank[numname][length]={"Bran","Ben","Jack","Keiva","erice","Qaxz"};
char colorbank[num][length]={"Green","Blue","Grey"};

struct person team[teammates];

void arrayofstr(void);
void printstr(void);

int main (int argc, char **argv){
   
   arrayofstr();
   printstr();

   return EXIT_SUCCESS;
}

   
void arrayofstr(void){
      srand(time(NULL));

      for(int i=0; i<teammates;i++){
	    int rf=rand()%numname;
	    int rl=rand()%numname;
	    int rc=rand()%num;
	    strcpy("team[i].firstname", firstnamebank[rf]);
	    strcpy("team[i].lastname", lastnamebank[rl]);
	    strcpy("team[i].color", colorbank[rc]);
	    team[i].age=rand()%maxage;
	    team[i].height=4.0+rand()%3+(rand()%10)/10.0;
      }
}

void printstr(void){
   for(int i=0; i<teammates; i++){
      printf("First Name:[%s]\t", team[i].firstname);
      printf("Last Name:[%s]\t", team[i].lastname);
      printf("Age: [%d]\t", team[i].age);
      printf("Height: [%.3f]\t", team[i].height);
      printf("Eye color: [%s]\n", team[i].color);
   }
}

