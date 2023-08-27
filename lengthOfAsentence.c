#include<stdio.h>

int printLength(char arr[]);

int main()  {
    char sentense[100];
    printf("enter the sentense... \n");
    fgets(sentense, 100, stdin);
    printf("length of sentense is : %d", printLength(sentense));
    return 0;
}

int printLength(char arr[])  {
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++)  {
        count++;
    }
    return count-1;
}