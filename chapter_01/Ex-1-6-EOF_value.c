#include<stdio.h>
int main(){
	int a,b;
	printf("Value of EOF : %3d\n",a=EOF);  
	printf("Expression: getchar() != EOF , has value :%3d\n", b=(getchar() !=EOF ));
} 
