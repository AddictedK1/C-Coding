#include<stdio.h>
#include<math.h>
int main()  {

    int a;  //first number
    int n;  //last number
    int sum = 0;
    
    printf("this code will give you the sum of all the numbers lying between the two numbers that you'll going to enter \n");
    printf("enter the first number \n");
    scanf("%d\n", &a);
    printf("enter the last number \n");
    scanf("%d\n", &n);

    if(a<=n)  {

        for(int i=a; i<=n; i++)  {
            
            sum = sum + i;
        }
        printf("sum is : %d\n", sum);          
    }  
    if(a>n)  {
        
        for(int i=n; i>=a; i--)  {
            
            sum = sum + i;
        }
        printf("sum is : %d\n, sum");

    }
    return 0;
}