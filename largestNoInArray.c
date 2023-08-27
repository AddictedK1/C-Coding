#include<stdio.h>

int main()  {
    int numbers[] = {1, 500, 8, 15, 2, 5, 99};
    int max = numbers[0];
    for(int i=0; i<=7 ; i++)  {
        if(numbers[i] >= max)  {
            max = numbers[i];
        }
    }
    printf("maximum number in array is %d", max);
    
    return 0;
}