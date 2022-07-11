Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.
signed int G_Str_SteeringAngle_sint = -60;
unsigned char G_Msg_SteeringInformation_Byte[3u];"

1.First convert the signed int G_Str_SteeringAngle_sint = -60 to hexdecimal value and print
2.Take unsigned char G_Msg_SteeringInformation_Byte[3u] three registers and assign three values
3.In Register 0 to print the G_Str_SteeringAngle_sint = -60 value 10 t0 12 bits hexa decmial value not distrubing other bits
4.In Register 1 to print the G_Str_SteeringAngle_sint = -60 value 2 t0 9 bits hexa decmial value not distrubing other bits
5.In Register 2 to print the G_Str_SteeringAngle_sint = -60 value 0 t0 1 bits hexa decmial value not distrubing other bits
6.printing all bits at a time not distrubing other bits
7.print all register values at time not distrubing other bits.*/

#include<stdio.h>
int main(){
    signed int G_Str_SteeringAngle_sint = -60;//assign given value in variable
    for(int i=12;i>=0;i--){
        printf("%x ",(G_Str_SteeringAngle_sint>>i)&1);//convert decimal to binary values and print the values
    }
    unsigned char G_Msg_SteeringInformation_Byte[3u]={0x00,0x00,0x00};//take an array to assign values
    G_Msg_SteeringInformation_Byte[0]=((G_Str_SteeringAngle_sint>>0)&~(1<<2));//print only 10 to 12 bits not distrubing other bits
    G_Msg_SteeringInformation_Byte[1]=(G_Str_SteeringAngle_sint>>2);//print  only 2 to 9 bits values not distrubing other bits
    G_Msg_SteeringInformation_Byte[2]=(G_Str_SteeringAngle_sint<<6);//print only 0 to 1 bits values not distrubing other bits
    for(int i=0;i<3;i++){
       printf("\nG_Msg_SteeringInformation_Byte[%d]:\n",i);
        for(int j=7;j>=0;j--)
            printf("%d ",(G_Msg_SteeringInformation_Byte[i]>>j)&1);//print values in binary.
       }
}
