/*4.Kishore bought ‘n’ number of lottery tickets. 
His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them.
 Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.*/

#include <stdio.h>

int main()
{
   int a[]={1,3,4,5,6,3,3,6,3};//Taken an array assign sum values 
   int n=sizeof(a)/sizeof(a[0]);//find the size of array
   int i,count=0;
   for(i=0;i<n;i++){
       if(a[i]==3)//check the condition
           count++;//condition true count will be increment
       }
       printf("%d",count);
   }
