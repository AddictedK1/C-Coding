#include<stdio.h>
#include<stdlib.h>
#include<time.h>       

int salting(int password[], int n);

int main()  {
    int password[10];
    printf("\nenter the password : \n");
   
    for(int i=3; i<7; i++)  {
        scanf("%d", &password[i]);
    }
    printf("\noriginal password is : ");
    for(int i=3; i<7; i++)  {
        printf("%d", password[i]);
    }
    
    salting(password, 10);

    return 0;
}

int salting(int password[], int n)  {
    int salt[3];
    srand(time(NULL));
    for(int i=0; i<3; i++)  {
        salt[i] = (rand() % 10);
    }
        if((rand() % 10) >= 5)  {
            for(int i=7, j=0; i<10, j<3; i++, j++)  {
                password[i] = salt[j];
            }
        }
        if((rand() % 10) < 5)  {
            for(int i=0, j=0; i<3, j<3; i++, j++)  {
                password[i] = salt[j];
            }
        }
     
    printf("\nsalted password is : ");
    for(int i=0; i<10; i++)  {
        printf("%d", password[i]);
    }
}

