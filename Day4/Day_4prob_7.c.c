2) SWAPPING OF TWO NUMBERS WITHOUT USING THIRD VARIABLE
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value a,b");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("%d %d",a,b);
}



