#include<stdio.h>
#define IN 1   /*symbolic constant for inside a word*/
#define OUT 0
int main(){
    int c, nl, nw, nc, state;

    state = OUT;
    c = nl = nw = nc = 0;
    while((c=getchar()) != EOF){
        ++nc;            
        if(c=='\n')
            ++nl;
        if(c==' ' || c=='\n' || c=='\t')
            state = OUT;     // sets status ooutside of word
        else if (state==OUT){
            state = IN;         // brings status back inside the word
            ++nw;
        }
    }
    printf("Number of Words: %d \n Number of characters: %d \n Number of lines: %d\n", nw,nc,nl);
}