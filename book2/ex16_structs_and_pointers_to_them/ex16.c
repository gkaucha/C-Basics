#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person {
 char *name;
 int age;
 int height;
 int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
 struct Person *who = malloc(sizeof(struct Person));
 assert(who != NULL);

 who->name = strdup(name);
 who->age = age;
 who->height = height;
 who->weight = weight;

 return who;
}


void Person_destroy(struct Person *who)
{
 assert(who != NULL);

 free(who->name);
 free(who);
}


void Person_print(struct Person *who)
{
 printf("Name: %s\n", who->name);
 printf("\tAge: %d\n", who->age);
 printf("\tHeight: %d\n", who->height);
 printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
 // make two people structures
 struct Person *gagan = Person_create("Gagan Magar", 32, 64, 140);

 struct Person *magan = Person_create("Magan magar", 20, 72, 180);

 // print them out and where they are in memory
 printf("Gagan is at memory location %p: \n", gagan);
 Person_print(gagan);

 printf("Magan is at memory location %p:\n", magan);
 Person_print(magan);

 //make everyone age 20 years and print them again
 gagan->age += 20;
 gagan->height -=2;
 gagan->weight +=30;
 Person_print(gagan);

 magan->age += 20;
 magan->weight += 20;
 Person_print(magan);

  //destroy them both to clean up 
  Person_destroy(gagan);
  Person_destroy(magan);

 return 0;

}
