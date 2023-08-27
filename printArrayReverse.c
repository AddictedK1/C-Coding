#include<stdio.h>

void reverse(int arr[], int n);

int main()  {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);

    return 0;
}

void reverse(int arr[], int n)  {
    for(int i=n-1; i>=0; i--)  {
        printf("%d\t", arr[i]);
    }
}