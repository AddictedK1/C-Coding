#include<stdio.h>

int main()  {
    int r, c;
    printf("enter the number of rows ");
    scanf("%d", &r);
    printf("enter the number of columns ");
    scanf("%d", &c);
    for(int i=0; i<r; i++)  {
        for(int j=0; j<c; j++)  {
            printf("*");
        }
    printf("\n");
    } 
    
    return 0;
}