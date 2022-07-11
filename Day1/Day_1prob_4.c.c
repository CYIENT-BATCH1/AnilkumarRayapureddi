/*4.Take a 6-digit number as input from the user and reverse the number. 
Make sure that the number does not include a ‘0’ in any of its digits.
 
    #include<stdio.h>
   int main(){
   int n,num,rev=0;//Declare a some variables
   printf("enter the value");
   scanf("%d",&n);//enter the values as user inputs
   if(n<=999999){//check the condition lessthan given value or not
   while(n>0){//ittratie the value untill condition falils
    num=n%10;//modulo divison the given vale
    rev=rev*10+num;//reverse the number
    n=n/10;
}
}
    printf("%d",rev);
}
     