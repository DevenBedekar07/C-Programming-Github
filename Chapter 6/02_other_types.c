#include<stdio.h>

int main(){
    
    char i='A';
    char* j=&i;

    printf("The  address of   i is %p\n",&i);    // & gives us the address
    printf("The  address of   i is %p\n",j);

    printf("The value at address i is %c",*(&i));    //* tells us the value 

    printf("\n");

    float k=53.32;
    float* k1=&k;
    
    printf("The  address of   k is %p\n",&k);
    printf("The  address of   k is %p\n",k1);

    printf("The value at address k is %f",*(&k));

    return 0;
}