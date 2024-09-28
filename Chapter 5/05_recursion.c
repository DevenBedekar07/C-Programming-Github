#include<stdio.h>


int factorial(int a);

 // factorial(5)=1x2x3x4x5
    // factorial(4)=1x2x3x4
    // factorial(3)=1x2x3
    // factorial(n)=1x2x3x4x....x n-1 x n
    // factorial(n-1)=1x2x3x4.....x n-1

    // factorial(n)=factorial(n-1)*n
int factorial(int n){

    if(n==1 || n==0)    // Base condition   it assures a recursive program ends
    {
        return 1;
    }


         // factorial(n)=factorial(n-1)*n
        return  n*factorial(n-1);
}


int main(){
    
    int a=1;
    printf("The Factorial of %d is %d \n",a,factorial(a));
    return 0;
}