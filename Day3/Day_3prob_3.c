//3.Write a program to reverse a 3-digit number which is entered from keyboard. 

#include <stdio.h>

int main()
{
    int n;//Declare a varibale
    scanf("%d",&n);//enter the values using user input
    int a,i,rev=0;
    if(n<=999){//give the condition for only three numbers
    while(n>0){
        rev=rev*10+n%10;//reverse the number
        n=n/10;
    }  
    }
    printf("%d",rev);
}

