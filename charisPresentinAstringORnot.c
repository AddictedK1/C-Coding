#include<stdio.h>
#include<string.h>

void checkchar(char str[], char character);     //declaration

int main()  {
    char str[100];
    char ch;
    printf("enter the sentense...\n");
    fgets(str, 100, stdin); 
    printf("enter character you wanna find : ");
    scanf("%c", &ch);
    checkchar(str, ch);     //calling

    return 0;
}

void checkchar(char str[], char character)  {   //definition
    int count = 0;
    for(int i=0; str[i]!='\0'; i++)  {
        if(str[i] == character)  {
            count++;
        }
    }
    if(count == 0)  {
        printf("sorry! there is no such character in sentense... \n");
    }if(count > 0)  {
        printf("yes there are %d of these present \n", count);
    }
}
