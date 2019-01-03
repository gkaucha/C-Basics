#include<stdio.h>
int main(void)
{
//prints Hello World and escapes line
 printf("Hello World!\n");

//temperature conversion
	float fahr, celsius;		//float variable types
	int lower, upper, step;        //int variable types 

	lower=0; upper=300; step=20; fahr=lower;

      /* while loop that repeats loop once per output line,
       because each line of table is computed the same way*/

     printf("\n\tTemperature Conversion\n\n\tFahrenheit\tCelsius\n");
	while(fahr<=upper){
	//number after decimal is not truncated.
		celsius = (5.0/9.0)*(fahr-32.0)/9;
 
	//3.0f prints fahr 3 chars. wide and no decimal or fraction digits
		printf("\t%3.0f\t\t %6.1f \n",fahr,celsius);

		fahr = fahr + step;
	}

}
