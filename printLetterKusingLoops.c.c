#include<stdio.h>

int main()  {
    
    int r, n;
    int space=1;
    for( r=1; r<=4; r++)  {
        printf("*");
        for(n=4; n>=space; n--)  {
            printf(" ");
            
            
        }
        printf("*");
        space++;
        printf("\n");
    }
    space=1;
    for( r=1; r<=4; r++)  {
        printf("*");
        for(n=1; n<=space; n++)  {
            printf(" ");
            
        }
        printf("*");
        space++;
        printf("\n");
    }
    
    return 0;
}