#include<stdio.h>

void doWork(float a, float b, float *sum, float *product, float *avg);

int main()  {
    float x, y;
    float sum, product, avg;
    
    printf("enter the first number : \n");
    scanf("%f", &x);
    printf("enter the second number : \n");
    scanf("%f", &y);

    doWork(x, y, &sum, &product, &avg);
    printf("sum is : %f\n", sum);
    printf("product is : %f\n", product);
    printf("avg is : %f\n", avg);
    
    return 0;
}

void doWork(float a, float b, float *sum, float *product, float *avg)  {
    
    *sum = a + b;
    *product = a * b;
    *avg = (a+b)/2; 
}