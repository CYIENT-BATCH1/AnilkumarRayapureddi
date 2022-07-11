/*2.A message ID is required to send data via CAN communication between ECU’s.
 Accept a random 2-digit message ID from the user to send data.
 Keep in mind that the given ECU only accepts binary form of the message ID. 
Write a program to convert the 2-digit ID to binary form.*/ 

#include <stdio.h>

int main()
{
   int n,x,i;//Declare a varibles
   printf("enter the value");
   scanf("%d",&n);//enter the values using user inputs
   for(i=7;i>=0;i--){
    x=(n>>i)&1;//using bit wise operators to convert the binary form
   
   printf("%d",x);
   }
    }
