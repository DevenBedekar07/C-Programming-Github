// . Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().






#include<stdio.h>

int* sum(int a,int b)
{
    int s=a+b;
    int* ptr=&s;
    printf("The sum is %d\n",s);
    return ptr;
}


float* avg(int a,int b)
{
    float average= (a+b)/2.0;
    float* ptr=&average;
    printf("The average is %.2f\n",average);
    return ptr;
}





int main(){
    
    int x=4;
    int y=6;
    int* ptr1;
    float* ptr2;

    ptr1=sum(x,y);
    ptr2=avg(x,y);

    printf("The address of sum is %u\nAnd the address of average is %u",ptr1,ptr2);


    return 0;
}