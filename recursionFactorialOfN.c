#include<stdio.h>

int factorial(int n);

int main()  {
    printf("factorial is : %d", factorial(5));
    return 0;

}

int factorial(int n)  {
    if(n == 1)  {
        return 1;
    }
    int factorialNm1 = factorial(n-1);      //factorial of n-1
    int factorialN = factorial(n-1) * n;    //factorial of n
    return factorialN;
}