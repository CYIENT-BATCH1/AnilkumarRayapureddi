/*6.students with roll numbers 1-9 are seated in ascending order in an examination hall.
 There has been a slight mistake in their seating arrangement where two consecutive roll numbers have been swapped.
 Choose these two consecutive numbers as per your choice and swap them back in their right places according to ascending order.*/



     #include<stdio.h>
   int main(){
   int a,b;//declare a two variables
   printf("enter the value");
   scanf("%d %d",&a,&b);//enter the values using user inputs
   a=a+b;//add two numbers and assign to a variable
    b=a-b;//substrack two numbers and assign to b variable
    a=a-b;//substrack teo numbers and assign to a variable
   printf("%d %d",a,b);//print the values
   }
