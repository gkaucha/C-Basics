#include<stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

 //go through each string in argv
 // skipping argv[0]
 for(i=1; i<argc; i++){
  printf("arg %d: %s\n", i, argv[i]);
 }

 // make our own array of strings
 char *states[] = {"Bagmati","Gandaki","Sudurpaschim","Mahakali"};

 int num_states = 4;

 for(i=0; i < num_states; i++){
  printf("state %d: %s\n", i, states[i]);
 }

 return 0;

}
