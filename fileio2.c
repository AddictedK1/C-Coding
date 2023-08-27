#include<stdio.h>

int main()  {
    FILE *fptr;
    fptr = fopen("numbers.txt", "r");
    int a;
    int b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    int sum = a + b;
    fclose(fptr);

    fptr = fopen("numbers.txt", "w");
    fprintf(fptr, "%d", sum);
    fclose(fptr);

    return 0;
}