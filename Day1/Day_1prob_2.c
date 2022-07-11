
/*2.Consider a character input from a user and print if it is a vowel or consonant.
  Algorithm:
1.Declare a variable
2.Enter the value using user input
3.check the condition  its true print vowels flase print conconant.
*/
   #include<stdio.h>
    int main(){
    char a;//Declare a variable
   printf("enter the value");
   scanf("%c",&a);//user input
   (a=='a'||a=='e'||a=='i'||a=='o'||a=='u') ? printf("vowels"):printf("consonant");//using ternary operator print the output
   }
