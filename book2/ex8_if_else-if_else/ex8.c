// In C, there isn't a Boolean type.
// any integer that's 0 is false or otherwise it's true.
// C have a typical if-statement that uses this numeric idea to do branching.

#include<stdio.h>

int main(int argc, char *argv[])
{
 int i = 0;

 if(argc == 1){
   printf("You only have one argument. You Suck.\n");
 }else if(argc > 1 && argc < 4){

     printf("Here's your arguments: \n");

	 for(i=0; i< argc; i++){
  		printf("%s ", argv[i]);
 	}

    printf("\n");
 }
 else {
	printf("You have too many arguments. You suck.\n");
 }

  return 0;
}
