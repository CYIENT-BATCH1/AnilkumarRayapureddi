/*1.We'll say a number is special if it is a multiple of 11 or if it is one more than a multiple of 11. 
Print “SPECIAL” if the given non-negative number is special. Use the % "mod" operator.
Algorithm:
1.Declare a varibale
2.Enter the value as a user input
3.The value is equalto zero or equal to one its true print the spical its false print nothing.
*/

  #include<stdio.h>
   int main(){
   int n;//Declare a varibale
   printf("enter the value");
   scanf("%d",&n);//user input}
   (n%==0||n%==1) ? printf("spcial"):printf("nothing");//using ternary operator print the values
   }
