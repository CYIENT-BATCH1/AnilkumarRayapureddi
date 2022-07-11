/* Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)
How Selection sort works is explained below.

Algorithm:
1.selection sort means print elements assending oredr or desending order
2.In main function given an array as user input
3.In sorting compare every element to other element so using for loops
4.After comparing store a value in any varible and swap 
5.print the values.*/

#include<stdio.h>
void sortelement(int a[], int n)//in function declare a variables
{
    int i,j,t;//declare a varibales
    if(n>0)//check the condition
    {
     for(i=0;a[i];i++)//using for itterate the alla values
    {
    for(j=i+1;a[j];j++)
    {
        if(a[i]>a[j])//check the condition which value is grater or not
        {
            t=a[i];//grater value will be assign to t varible
            a[i]=a[j];//a[j] value will be assign to a[i]
            a[j]=t;// t value will be assign to a[j]
        }
    }
    }
}
}
int main()
{
    int n=5,j;
    int a[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);//give a values as user inputs
    }
    sortelement(a,n);//calling the function
    printf("After sort Array Elements are:");
    int i;
    for (i=0; i < n; i++)//iterrate the values 
     printf("%d ", a[i]);//print the values
    return 0;
}

