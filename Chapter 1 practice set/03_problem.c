#include<stdio.h>

int main(){
    
    
    float c,f;
    

    printf("Enter the Temperature in Celsius\n");
    scanf("%f",&c);

    f=((9.0/5.0)*c)+32;

    printf("The temperature in Fahrenheit is %f",f);


    return 0;
}