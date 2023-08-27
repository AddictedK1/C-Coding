#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main()  {
    char password[100];
    printf("enter the password : ");
    scanf("%s", &password);
    salting(password);
    return 0;
}
void salting(char password[])  {
    char newpass[150];
    char salt[] = "123";
    strcpy(newpass, password);
    strcat(newpass, salt);
    printf("salted password is : %s", newpass);
}