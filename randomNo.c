#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()  {
    srand(time(NULL));
    int password[6];
    
    for(int i=0; i<=5; i++)  {
        password[i] = rand() % 9;  
    }
    printf(" generated password is : \n");
    for(int i=0; i<=5; i++)  {
        printf("%d\t", password[i]);
    }
    
    return 0;
}