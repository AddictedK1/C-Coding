#include<stdio.h>
int main()  {
    char ch;
    char str[100];
    int i = 0;          //index of string
    printf("enter the sentense... \n");

    while(ch != '\n')  {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}