#include<stdio.h>

int main()  {
    char arr[26];
    char *ptr = arr;

    for(int i=0; i<26; i++)  {
        *ptr = i + 'a';
        ptr++;
    }
    ptr = arr;
    for(int i=0; i<26; i++)  {
        printf("%c\t", *ptr);
        ptr++;
    }
    
    return 0;
}