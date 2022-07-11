//8.Write program to check given i/p by user is alphabet or not alphabet using conditional operator

#include <stdio.h>

int main()
{
    char n;//Declare a variblae 
    scanf("%c",&n);//enetr the value using user input
    ((n>='a'&&n<='z')||(n>='A'&&n<='Z')) ? printf("alphabet"):printf("not alphabet");//using ternary operator to check the alphabet or not alphabet
}
    