// 1. Write a program using function to find average of three numbers.

#include<stdio.h>

float average(int a,int b,int c)
{                                                //Tried by me successfully
    float avg=(a+b+c)/3.0;   

    return avg;
}

int main(){

    int a,b,c;

    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    float d= average(a,b,c);

    printf("The average of the numbers is : %f\n",d);    
    return 0;
}