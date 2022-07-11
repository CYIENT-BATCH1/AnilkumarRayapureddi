//6.Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 


#include <stdio.h>

int main()
{
   int f,c,t;//Declare a varibales
   scanf("%f",&c);//enter the values using user input
   f=c*9/5+32;// convert celsius to temperature using formula
   c=5/9*(f-32);// convert temperature to celsius using formula
   printf("convert Celsius to Fahrenheit %f\n",f);
   printf(" convert Fahrenheit to Celsius  %f\n",c);
}
   
