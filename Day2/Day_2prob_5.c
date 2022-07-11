//5.A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 


#include <stdio.h>

int main()
{
    char n;//Declare a varibale to charcter data type
    scanf("%c",&n);//enter the charcter using user input
    int l=n%64;//decode the message
    printf("%d\n",l);
    
}
