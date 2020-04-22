#include<stdio.h>

int power(int a, int n);

int main(){

    
    printf("power\t base of 4\t base of -3\n");
    int i;
    for(i=0; i<10; i++)
    printf("%d\t %d\t\t %d\n", i, power(4,i), power(-3,i));
    return 0;
}

/*power function Version 2*/
int power(int base, int n){
    
    int p;

    for(p=1; n>0; --n)

        p = p* base;
    
    return p;
}
