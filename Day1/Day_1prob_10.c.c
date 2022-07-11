// 10.Consider the weights of three people as user input. Find the heaviest among them and print it.

 
      #include<stdio.h>
   int main(){
   int a,b,c;//Declare a three varibles
   printf("enter the value");
   scanf("%d %d %d",&a,&b,&c);//enter the values using user inputs
   a>b&&a>c?printf("the largest is a"):b>a&&b>c?printf("the largest is b"):printf("the largest is c");//using ternary opertor to check the largest number
    }
      