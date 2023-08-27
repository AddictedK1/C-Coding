#include<stdio.h>

void namaste();
void bonjour();

int main()  {   
    printf("enter i for indian and f for french \n");
    char ch;
    scanf("%c", &ch);
    
    if(ch == 'i')  {
        namaste();
    }else if(ch == 'f')  {
        bonjour();
    }
    return 0;
}

void namaste()  {
    printf("Namaste \n");
} 
void bonjour()  {
    printf("Bonjour \n");
}