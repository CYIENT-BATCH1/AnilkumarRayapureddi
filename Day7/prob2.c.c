/*2.Write a code to swap even bits with odd bits in unsigned long variable(uint64).

Algrorithm

1.Declare a varible x and s assign a value to x.
2.obtain the even bits and shift these to odd positions.
3.obtain the odd bits and shift these to even positions.
4.combine the shifted values of odd and even bits.
*/

#include <stdio.h>

int main()
{
    unsigned int x,s;//Decalre a two variables
    scanf("%d",&x);//enter the values as user input
    
    unsigned int eve=x&0xAAAAAAAAAAAAAAAA;//gets all even bits of x 1010101010101
    unsigned int odd=x&0x5555555555555555;//gets all odd bits of x 0101010101010
   s= (eve>>1)|(odd<<1);//combination of rigt shift even bits,left shift odd bits
   printf("%d",s);
}
    