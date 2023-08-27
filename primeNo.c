#include<stdio.h>

void checkPrime(int i);

int main()  {
    int n;
    int count = 0;
    printf("enter the number n : ");
    scanf("%d", &n);
    
    for(int i=2; i<=n; i++)  {
        checkPrime(i);       
    }
    return 0;
}
void checkPrime(int i)  {
    int count = 0;
    for(int j=1; j<=i; j++)  {
        if(i%j == 0)  {
            count++;
        }
    }
    if(count<=2)  {
        printf("%d\t", i);
    }
}