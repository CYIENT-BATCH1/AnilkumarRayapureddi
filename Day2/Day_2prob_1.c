
//1.Consider the phone number of a person as user input and find the sum of its digits. 

#include<stdio.h>
int main()
{
   long int n,sum=0,num,t;//Declare a varibales
    printf("enter the value");
    scanf("%ld",&n);//enter the values using use inputs
    while(n>0){//check the condition
       sum=sum+n%10;//sum the all  numbers
       n=n/10;
    }
       printf("%ld",sum);//print all numbers sum
    
}

