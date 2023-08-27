#include<stdio.h>
#include<math.h>
int main()  {
    int originalNo, remainder, number, n = 0;
    int result = 0.0;

    printf("enter the number : ");
    scanf("%d", &number);

    for(int originalNo = number; originalNo != 0; ++n)  {    //counting digits is the number
        originalNo /= 10;
    }
    for(int originalNo = number; originalNo != 0; originalNo /= 10)  {   //calculating
        remainder = originalNo % 10;
        result = result + pow(remainder, n);
    }
    if((int)result == number)  {
        printf("%d is an armstrong number \n", number);
    }
    if((int)result != number)  {
        printf("%d is not an armstrong number \n", number);
    }
    return 0;
}