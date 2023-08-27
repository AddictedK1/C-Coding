#include<stdio.h>

void sort(int numbers[], int size);

int main()  {
    int numbers[] = {1, 5, 6, 7, 9, 4, 2, 3, 8, 10, 0};
    int size = sizeof(numbers) / sizeof(int);  
    for(int i=0; i<size; i++)  {
        printf("%d\t", numbers[i] );
    }
    sort(numbers, size);
    return 0;
} 

void sort(int numbers[], int size)  {
    for(int i=0; i<size; i++)  {
        for(int j=0; j<size; j++)  {
            if(numbers[i+1] >= numbers[i])   {
                numbers[i] = numbers[i+1];
            }
        }
    }
    for(int i=0; i<size; i++)  {
        printf("%d\t", numbers[i] );
    }
}