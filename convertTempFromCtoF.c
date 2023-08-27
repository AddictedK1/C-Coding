#include<stdio.h>

float convertTemp(float t);

int main()  {
    float t;
    printf("enter temperature in celsius : ");
    scanf("%f", &t);
    printf("temp. in fahrenheit is : %f\n", convertTemp(t));
    return 0;
}
 
float convertTemp(float t)  {
    float far = t * 1.8 + 32;    //far == fahrenheit
    return far;
}