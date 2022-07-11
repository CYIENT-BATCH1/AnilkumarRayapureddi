
/*Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55

1.Declare a varible and assign a given value.
2.Assign a position to a SMP
3.Assign a position to a BF
4.Print values of positions using bitwise operators.*/

#include<stdio.h>

int main(){
 int SSPSTAT=0x55;//assign given value to SSPSTAT
 int SMP=7;//assign 7 position to SMP
 int UA=1;//assign 1 position to UA
 int BF=0;//assign 0 position to BF
printf("%x %x %x ",(SSPSTAT>>SMP)&1,(SSPSTAT>>UA)&1,(SSPSTAT>>BF)&1);//using bitwise operators to find the position values.
}

