#include<stdio.h>
#include<math.h>

void printhello();   // declaration or prototype
void printgoodbye();

int main()  {

    printhello();  // function call
    printgoodbye();
    return 0;
}

// function definition
void printhello()  {
    
    printf("hello world \n");
}
void printgoodbye()  {

    printf("goodbye \n");
}
