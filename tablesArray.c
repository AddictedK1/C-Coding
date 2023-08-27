#include<stdio.h>

void storetable(int arr[][10], int n, int m, int number);
int main()  {
    int tables[2][10];
    
    storetable(tables, 0, 10, 5);          
    storetable(tables, 1, 10, 10);
    return 0;
}

void storetable(int arr[][10], int n, int m, int number)  {

    for(int i=0; i<10; i++)  {
        arr[0][i] = number * (i+1);
        printf("%d \t", arr[0][i]);
    }
    printf("\n");
    for(int j=0; j<10; j++)  {
        arr[1][j] = number * (j+1);
        printf("%d \t", arr[1][j]);
    }

}