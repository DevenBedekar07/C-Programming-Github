// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?



#include<stdio.h>

int address(int* ptr)
{
    printf("The address of ptr %d\n",ptr);
    printf("The value at ptr is %d\n",*ptr);
}

int main(){
    
    int i=2;
    int* ptr=&i;

    printf("The address of i is %u\n",&i);
 
    address(ptr);

    return 0;
}