#include<stdio.h>
#include<string.h>

typedef struct BankAccountInformation  {
    char name[100];
    int age;
    float balance;  // in billion USD
} acc;

int main()  {
    acc acc1 = {"Elon_Musk", 52, 237.7};
    acc acc2 = {"jeff_bezos", 59, 153.2};
    acc acc3 = {"mark_zuckerberg", 39, 101.8};
    
    printf("first is %s at age of %d with net worth of %f billion USD \n",acc1.name,acc1.age,acc1.balance);
    printf("second is %s at age of %d with net worth of %f billion USD \n",acc2.name,acc2.age,acc2.balance);
    printf("third is %s at age of %d with net worth of %f billion USD \n",acc3.name,acc3.age,acc3.balance);
    return 0;
}