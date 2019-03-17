#include<stdio.h>
  int main(){
		int c;      // int data type because of its sizeg
		//EOF is special char whose value is distinct from that of real chars
		// != is "not equal to"

		while((c=getchar()) != EOF) //an assignment can be a part of larger expression 
		 {
			 putchar(c);
		 }
  }
