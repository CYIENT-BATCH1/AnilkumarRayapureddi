2.Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.


#include <stdio.h>

int main()
{
    int a;//declare a varible
    scanf("%d",&a);//enter the value using user input
   int n,sum=0,b,c,temp=a;
   n=a%10;// use modulo division and assign value to varibale
   a=a/10;//use divison 
   c=a%10;
   a=temp;
   while(a>0){//check the condition
       b=a;
       a=a/10;
       sum=b+c;//sum the first and second last digist
       }
   printf("%d",sum);
}
   