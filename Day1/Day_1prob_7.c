// 7.Find whether a given 10-digit number is palindrome or not. 
 //(HINT: Any number is said to be a palindrome if the original number and the reverse of the original number are the same.)

     

     #include<stdio.h>
   int main(){
   int n,num,rev=0;//Declare a varibales 
   printf("enter the value");
   scanf("%d",&n);//enter the values using user inputs
 int temp=n;
   while(n>0){//check the condition
    num=n%10;
    rev=rev*10+num;//reverse the number
    n=n/10;
}
  if(rev==temp)//check the given number and reverse number
printf("the given no is palindrome");
else
printf("the given no is not palindrome");
}
