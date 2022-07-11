
/*3.Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”
Algorithm 

1.Declare a two varibales.
2.In printf statement enter the value 
3.scan the values
4.using control statements 0x07 is equal to the value combine the value with bit wise operator AND(& )
5.statement false print nothing.*/

#include <stdio.h>

int main()
{
  int re1,re2;//Declare a two varibales
  printf("enter the value");
  scanf("%d %d",&re1,&re2);//use define input
  if((28&re1)==28){//check the condition true or false
  re2=re2&0xf0;//using bit wise operator AND(&) assign value to re2 
  printf("%d",re2);//print the re2 value
  }
  else{
      printf("nothing");
  }
}
 
