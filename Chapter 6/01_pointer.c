#include<stdio.h>

int main(){
    
    int i=72;
    int* j=&i; // j is a pointer pointing towards i(storing the address of i)(j is an integer pointer)
    int k=62;
    printf("The address of i is %p\n",&i);  //& operator is address of operator
    // printf("The address of i is %u\n",&i);  //if we want to see in integer form mostly we will use %p

     printf("The address of i is %p\n",j);
     printf("The address of k is %p\n",&k);


    // //  if we have address and we have to find value

    printf("The value at address  i is %d\n",*(&i));

    // // The same can be written as

    printf("The value at address  i is %d\n",*j);   
 
    return 0;
}