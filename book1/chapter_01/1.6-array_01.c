//count digits, white spaces, others //
#include<stdio.h>

int main()
{
    int c, i, whiteC, otherC;
    int ndigit[10];

    whiteC = otherC = 0;
  
  for( i=0; i<10; ++i)
       { ndigit[i] = 0; }

    while((c=getchar()) != EOF){
         if(c >= '0' && c <= '9')
            { ++ndigit[c-'0']; }
         else if (c ==' ' || c == '\n' || c == '\t')
            { ++whiteC; }
         else
            { ++otherC; }
    }  

   printf("\ndigits : ");
    for(i=0; i<10; ++i)
       { printf("%d", ndigit[i]); }
   
   printf("\n white spaces = %d \n other Characters = %d\n", whiteC, otherC); 

}
