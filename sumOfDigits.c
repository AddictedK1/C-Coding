#include<stdio.h>
#include<math.h>
int main()  {
    int num, originalNo, remainder;
    int sum = 0;
    printf("enter the number : ");
    scanf("%d", &num);
    
    for(int originalNo = num; remainder !=0; originalNo /= 10)  {
        remainder = originalNo % 10;
        sum = sum + remainder;

    }
    printf("sum is : %d\n", sum);
    return 0;
}