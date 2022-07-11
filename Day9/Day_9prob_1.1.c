/*******************************************************************************/
/*Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.
Aligorthm
1.Assign any hexadecimal value in SSPSTAT register
2.clear the bits any one position of CKE,P nad S
3.using bitwise opertors to clear the bits of particular position */

#include<stdio.h>
int main(){
    int sspstat=0xff;//assign some value to SSPSTAT
    int s=3;//take pos 3
    int p=4;//take pos 4
    int cks=6;//take a pos 6
    int b=sspstat&~(1<<s)&~(1<<p)&~(1<<cks);//clear the bits using bit wise opertors
    printf("%x",b);
    
}
