// C treates strings as just arrays of bytes
// usually strings and arrays of bytes are treated differently in othr lang.
// only the different printing function recogize the diffreence in C

#include<stdio.h>

int main(int argc, char *argv[])
{
 int areas[] = {10,12,13,14,60,90};
 char name[] = "Gagan";
 char full_name[] = {'G','a','g','a','n','.','K','a','u','c','h','a','\0'};

 printf("The size of an int: %ld\n",sizeof(int));
 printf("the size of area(int[]): %ld\n",sizeof(areas));
 printf("The size of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
 printf("The first area is %d, the 2nd area is %d. \n", areas[0], areas[1]);


 printf("The size of a char: %ld\n",sizeof(char));
 printf("The size of name (char[]): %ld\n", sizeof(name));
 printf("The number of chars: %ld\n",sizeof(name)/sizeof(char));
 printf("The size of full_name(char[]): %ld\n",sizeof(full_name));

 printf("name=\"%s\" and full_name=\"%s\"\n",name, full_name); 
return 0;

}
