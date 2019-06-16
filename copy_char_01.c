#include<stdio.h>
	int main(){
		int c;      // int data type because of its size
		c=getchar();
		while(c != EOF)      //EOF is special char whose value is distinct from that of real chars
		{                    // != is "not equal to"
		  putchar(c);
		  c=getchar(); 
		}
	}
