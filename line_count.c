//count the number of linesHe
#include<stdio.h>
int main(){
     int c,nol;

	while( (c=getchar()) != EOF)
       {
	 if(c == '\n')
	      ++nol;
       }
	printf("No. of Lines : %d\n",nol);
} 
