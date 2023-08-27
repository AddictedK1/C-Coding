#include<stdio.h>

void printHW(int count);

int main()  {
    int count = 5;
    printHW(count);
    return 0;
}

void printHW(int count)  {
    if(count == 0)  {
        return;
    }
    
    printf("hello world \n");
    printHW(count-1);


}