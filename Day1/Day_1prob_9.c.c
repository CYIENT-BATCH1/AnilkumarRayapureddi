/* 9.implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,0

   			0,1

  			1,0

   			1,1. */
   

    #include<stdio.h>
   int main(){
    int a,b,x,y,z;//Declare a varibles
    printf("enter the value");
    scanf("%d %d,&a,&b);//enter the values using user inputs
     x=a&&b;//using logical operator
     y=a||b;//using or operator
     z=!a;//using not operator
    printf("%d %d %d",x,y,z);//print outputs of all values
   }