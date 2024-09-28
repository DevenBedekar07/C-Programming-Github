#include<stdio.h>

int main(){

    // POINTER ARITHMETIC   INTEGER POINTER
    
    // int a=5;
    // int* ptr=&a;

    // printf("The address of a is : %u\n",&a);
    // printf("The address of a is : %u\n",ptr);
    // ptr++;

    // printf("Value of ptr is :%u\n",ptr);


    char a='A';
    char* ptr=&a;

    printf("The address of a is : %u\n",&a);
    printf("The address of a is : %u\n",ptr);
    ptr++;

    printf("Value of ptr is :%u\n",ptr);
    return 0;
}