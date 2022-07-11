//1.Convert 0xFF to binary value
#include <stdio.h>

int main()
{
    int n=0xff,i,x;declare a varible and assign a given value
    for(i=15;i>=0;i--){
        x=(n>>i)&1;//using bitwise operator to convert the binary value
    
    printf("%d",x);
}
}
