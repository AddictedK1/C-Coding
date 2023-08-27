#include<stdio.h>
#include<string.h>

struct address  { 
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printaddress(struct address adds);

int main()  {
    struct address adds[5];
    
    for(int i=0; i<5; i++)  {
    printf("enter the address of person %d : as (houseNo,block,city,state) \n", i+1);
    scanf("%d", &adds[i].houseNo);
    scanf("%d", &adds[i].block);
    // scanf("%s", &adds[i].city);
    // scanf("%s", &adds[i].state);
    fgets(adds[i].city, 100, stdin);    
    fgets(adds[i].state, 100, stdin);   
    }
    for(int i=0; i<5; i++)  {
    printaddress(adds[i]);
    }
    
    return 0;
}
void printaddress(struct address adds)  {
    printf("address is : %d,%d,%s,%s\n",adds.houseNo, adds.block, adds.city, adds.state);
}