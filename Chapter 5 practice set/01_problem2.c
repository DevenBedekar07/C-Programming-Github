// 1. Write a program using function to find average of three numbers.

#include<stdio.h>

float average(int a,int b,int c)
{                                                //Code with Harry's Code  more simplified
    
    return (a+b+c)/3.0;
}

int main(){

    int a,b,c;

    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    
    printf("The average of the numbers is : %f\n",average(a,b,c));    //Function calling in printf statement
                                                                      //making program much simpler
    return 0;
}