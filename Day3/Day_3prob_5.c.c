//5.Right shift the value 0xFE by 3 bits and print the value

#include <stdio.h>

int main()
{
    int a=0xfe;//declare a varibale and assign given value
   int x=(a>>3);//using bitwise operator to print only 3 bits
    printf("%x",x);
}
