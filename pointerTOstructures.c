#include<stdio.h>
#include<string.h>

struct student  {
    char name[100];
    int roll;
    float cgpa;
};

int main()  {
    struct student s1 = {"kaine", 11, 10};
    struct student *ptr = &s1;
    
    printf("name is : %s \n", ptr->name);

    return 0;
}