#include<stdio.h>

int main()  {
    int x, position, i;
    int n = 9;
    int numbers[100] = {0};
    
    printf("enter the number : ");
    scanf("%d", &x);
    printf("enter the position : ");
    scanf("%d", &position);
    
    for(int i=0; i<=n; i++)  {
        numbers[i] = i+1;   
    }
    printf("original array : %d", numbers[i]);
    
    n++;

    for(int i=n; i>position; i--)  {
        numbers[i] = numbers[i-1]; 
    }
    numbers[position] = x;

    for(int i=0; i<=n; i++)  {
        printf("new array is : %d", numbers[i]);
    }
    
    return 0;
}