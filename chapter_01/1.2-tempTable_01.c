#include<stdio.h>     
int main(){

      /*variables usually declared before executable statements */ 
     	int fahr, celsius;		//int variable types
	int lower, upper, step; 

      /* assignment statements to assign initial values to variables */
	lower=0; upper=300; step=20; fahr=lower;

      /* while loop that repeats loop once per output line,
        each line of table is computed the same way*/

	while(fahr<=upper){
		celsius = 5*(fahr-32)/9;

		//%d specifies the integer argument
		printf("%d\t%d\n",fahr,celsius);

		fahr = fahr + step;
        }
}
