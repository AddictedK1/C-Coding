#include<stdio.h>

int fib(int n);     // fib is fibonacci

int main()  {
    int n;
    printf("enter the number of term : ");
    scanf("%d", &n);
    printf("the %dth term is %d", n, fib(n));
    return 0;
}

int fib(int n)  {
    if(n == 1)  {
        return 1;
    }else if(n == 0)  {
        return 0;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fib(n-2) + fib(n-1);
    return fibN;
}