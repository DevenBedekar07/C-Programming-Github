#include<stdio.h>

int main()
{
    

    int a=4;
    int b=3;
    int c =a+b;

    printf("The value of a is %d and value of b is %d and their sum is %d\n",a,b,c);

    //Modulus operator is used to get remainder
    printf("The value of remainder when a is divided by b is %d",a%b);
    return 0;

    //This does not work for exponentiation in c
    //int d=a^b
}