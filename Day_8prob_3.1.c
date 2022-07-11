/*Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.

Algorithm
1.Assign any hexa decimal value to a T0CON register
2.Set the PSA 3 bit and TMR0ON 7 
3.left shift (<<) the given position of PSA and TMR0ON.
4.using or(|) operator combine the PSA and TMR0ON.*/

#include<stdio.h>
int main(){
    int T0CON=0x12;//assign any value to T0CON 
    int psa=3;//Assign position value to PSA
    int TMR0ON=7;//assign position value to TMR0ON
    T0CON=T0CON|(1<<psa)|(1<<TMR0ON);//ussing bitwise operators to set postion 
    
    printf("%x",T0CON);
}
