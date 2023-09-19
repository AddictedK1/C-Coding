#include<stdio.h>

int main()  {
    
    int res1,res2;
    int count1=0;
    int count2=0;
    
    for(int i=1; i<=100; i++)  {
        for(int j=1, k=1; j<=i, k<=i+2; j++,k++)  {
            res1 = i%j;        //checks if the number is prime or not..
            res2 = (i+2)%k;       //checks if number after 2 digit is prime or not..
            if(res1 == 0)  {
                count1++;      
            }
            if(res2 == 0)  {
                count2++;
            }
        }
        
        if(count1==2 && count2==2)  {      //if the pair is prime then print both no.
            printf("%d,%d\n",i,(i+2));
        }else{              //if both are not prime the repeat the process....
            count1=0;
            count2=0;
        }
    }
    return 0;
}
