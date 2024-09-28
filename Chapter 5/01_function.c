#include<stdio.h>

// Function Prototype
int sum(int,int);

// Function Definition
int sum(int x,int y)
{
    // printf("The Sum is : %d\n",x+y);        
    return x+y;                                              /*Returns the value to int c
                                                             while printing output if we want to print it in main 
}                                                             function we'll call c variable*/

int main(){
    
    int a=12;
    int b=6;

    int c=sum(a,b);   //Function call
    printf("The sum of the given number is  : %d\n",c);


    int a1=15;
    int b1=9;

    int c1=sum(a1,b1);
    printf("The sum of the given number is  : %d\n",c1);




    int a2=20;
    int b2=10;

    int c2=sum(a2,b2);
    printf("The sum of the given number is  : %d\n",c2);


    return 0;
}