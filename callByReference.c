#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()  {
    int x = 3, y = 5;
    int t;    // temporary variable
    printf("this is the output of call by value..... \n");
    swap(x, y);
    printf("x is : %d and y is : %d \n",x ,y);
    
    printf("this is the output of call by reference..... \n");
    _swap(&x, &y);
    printf("x is : %d and y is : %d \n",x ,y);
    
    return 0;
}

    //call by value
void swap(int a, int b)  {
    int t = a;
    a = b;
    b = t;
    printf("a is : %d and b is : %d \n",a ,b);
}
    //call by reference
void _swap(int *a, int *b)  {
    int t = *a;
    *a = *b;
    *b = t;
}