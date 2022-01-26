

### The Keywords

- Keywords are words that augment the symbols so that language reads well.

- Language APL has no any keywords
- Languaes like Forth LISP are almost nothing but keywords
- C, Python, Ruby etc are the mix.

- **Lexical Analysis** : processing the symbols and keywords (lexeme) of a programming language. 

### Keywords

| Operator      | Description |
| ----------- | ----------- |
| auto | Give a local variable a local lifetime |
| break | Exit out of a compound statement |
|case| A branch in a swtich-statement|
| char | Character data type |
| const | Make a variable unmodiafiable |
| contineu | Continue to the top of a loop |
| default | Default branch in a switch-statement |
| do | Start a do-while loop |
| double | A double floating-point data type |
|else | An else brach of an if-statement |
| enum | Defina a set of int constants |
| extern | Declare an identifier is defined externally |
| float | A floating-point data type |
| for | Start a for loop |
| goto | Jump to a label |
| if | starts an if-statement |
|int | An integer data-type |
| long| A long integer data type |
| register | Declare a varibale to be stored in a CPU register |
| return | Return from a function |
| short | A short integer data type|
| signed | A signed modifier for integer data types |
| sizeof | Determine the size of data |
| static | Preserve variable value after its scope exits |
| struct | combine variables into a single record |
| switch | Start a switch-statement |
|typedef|Create a new type|
|union | start a union-statement|
|unsigned|An unsigned modifier for integer data types|
|void|Declare a data type empty|
|volatile|Declare a variable might be modified elsewhere|
|while| start a while-loop|


### Syntax structures

**Syntax Structure:** A pattern of symbols that make up a C program code form, such as the form of an if-statement or a while-loop.

1. An if-statement is your basic logic branching control:


```
if(TEST) {
CODE;
} else if(TEST) {
CODE;
} else {
CODE;
}
```
2. A switch-statement is like an if-statement but works on
simple integer constants:
```switch (OPERAND) {
case CONSTANT:
CODE;
break;
default:
CODE;
}
```
3. A while-loop is your most basic loop:
```
while(TEST) {
CODE;
}
```
4. You can also use continue to cause it to loop. Call this form
while-continue-loop for now:
```
while(TEST) {
if(OTHER_TEST) {
continue;
}
CODE;
}
```
5. You can also use break to exit a loop. Call this form while- break-loop:
```
while(TEST) {
if(OTHER_TEST) {
break;
}
CODE;
}
```

6. The do-while-loop is an inverted version of a while-loop
that runs the code then tests to see if it should run again. It can also have continue and break inside to control how it
operates.
```
do {
CODE;
} while(TEST);
```

7. The for-loop does a controlled counted loop through a
(hopefully) ﬁxed number of iterations using a counter:
```
for(INIT; TEST; POST) {
CODE;
}
```

8. An enum creates a set of integer constants:
```
enum { CONST1, CONST2, CONST3 } NAME;
```

9. A goto will jump to a label, and is only used in a few useful situations like error detection and exiting:
```
if(ERROR_TEST) {
goto fail;
}
fail:
CODE;
```

10. A function is deﬁned this way:
```
TYPE NAME(ARG1, ARG2, ..) {
CODE;
return VALUE;
}
```
```
int name(arg1, arg2) {
CODE;
return 0;
}
```

11. A typedef deﬁnes a new type:
```
typedef DEFINITION IDENTIFIER;
//for example
typedef unsigned char byte;
//the DEFINITION is unsigned char and the IDENTIFIER is byte in this example.
```

12. A struct is a packaging of many base data types into a single concept, which are used heavily in C:
```
struct NAME {
ELEMENTS;
} [VARIABLE_NAME];
```

The [VARIABLE_NAME] is optional, and I prefer not to use it except in a few small cases. This is commonly combined
with typedef like this:
```
typedef struct [STRUCT_NAME] {
ELEMENTS;
} IDENTIFIER;
```
13. Union creates something like a struct, but the elements will overlap in memory:
```
union NAME {
ELEMENTS;
} [VARIABLE_NAME];
```