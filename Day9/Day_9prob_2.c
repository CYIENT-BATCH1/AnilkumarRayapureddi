/*2.Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”1

Algorithm:
1.Take some variables 
2.Read the values as user input
3.If given value is equal to  0x06 to set the bit any three positions of value*/


#include <stdio.h>
int main()

{
  int n1,n2,pos=3,pos1=6,pos2=7;//decalre a varibales and assign positions
  printf("enter the values");
  scanf("%d%d",&n1,&n2);//enter the values as user input
  if((48 & n1) == 48)//check the condition 
  {
      n2=n2|(1<<pos)|(1<<pos1)|(1<<pos2);//set the bits only given positions useing bitwise operators
      printf("%d",n2);
  }
  else
  printf(" not equal nothing");

}
