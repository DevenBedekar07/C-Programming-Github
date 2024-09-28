#include<stdio.h>

int main(){
    
    int a=2342354;

    int b= 3349895;

    printf("The value of a%97 is :%d\n",a%97);
    printf("The value of b%97 is :%d\n",b%97);

    if(a%97==0)                                      // if else is self added

        printf("a is divisible by 97\n");

    else

        printf("a is not divisible by 97\n");



    if(b%97==0)

        printf("b is divisible by 97\n");

    else

        printf("b is not divisible by 97\n");



    return 0;
}