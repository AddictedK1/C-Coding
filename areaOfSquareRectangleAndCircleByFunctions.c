#include<stdio.h>
#include<math.h>

float rectangle(float l, float w);
void circle(float r);

int main()  {
    float l, w, r;  //length, width, radius
    char ch;
    printf("enter 's' for square \n");
    printf("enter 'r' for rectangle \n");
    printf("enter 'c' for circle \n");
    
    scanf("%c", &ch);

    if(ch == 's')  {                               // for square...
        printf("enter the length : ");
        scanf("%f", &l);
        printf("area is %f \n", pow(l, 2));
    }else if(ch == 'r')  {                         //for rectangle...
        printf("enter length : \n");
        scanf("%f", &l);
        printf("enter width : \n");
        scanf("%f", &w);
        float a = rectangle(l, w);   
        printf("%f", a);
    }else if(ch == 'c'){                          //for circle...
        printf("enter radius : \n");
        scanf("%f", &r);
        circle(r);
    }
}
float rectangle(float l, float w)  {
    printf("area is : ");
    return l * w;
}
void circle(float r)  {
    printf("area is : %f", pow(r, 2)*3.14);    
}