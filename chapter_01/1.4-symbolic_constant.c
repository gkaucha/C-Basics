#define LOWER 0		 //lowerlimit
#define UPPER 300	 //upperlimit
#define STEP 20		//step size

int main(){
  int fahr;
  printf("Fahrenheit-Celsius table\n");

  for(fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP)
	printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
