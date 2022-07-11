/*3.It was Raj's first day at school. 
His teacher asked the students to meet every other student in the class and to introduce themselves.
 The teacher asked them to give handshakes when they meet each other. 
If there are ‘n’ number of students in the class then find the total number of handshakes made by the students.*/

#include <stdio.h>

int main()
{
   int n,x;//Declare a varibles
   printf("enter the value");
   scanf("%d",&n);//enter the values using user input
  x=n*(n-1);//to caluclate how many handshakes using formula 
   
   printf("%d",x);
    }
