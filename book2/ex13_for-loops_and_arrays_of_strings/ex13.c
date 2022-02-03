//a stirng and and an array of bytes are the same thing
// the char *argv[] argument  of the main function is  an array of strings

#include<stdio.h>

int main(int argc, char *argv[])
{

 int i = 0;

 // go through each string in argv
 // why am I skipping argv[0]?
 for(i=0; i< argc; i++){
    printf("arg %d: %s\n", i, argv[i]);
 }

 // let's make our own array of strings
 char *states[] = { "Bagmati","Gandaki","Mahakali","Mechi"};

 // Accessing G char from 2 dimension states array of strings
 printf("%c: \n",states[1][0]);

 int num_states =94;

 for(i=0; i<num_states; i++){
  printf("state %d: %s\n", i, states[i]);
 }

return 0; 

}
