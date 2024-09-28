#include<stdio.h>

int main(){
    
    float a=9;
    float b=2;

    float c=a/b;
    int d =6.7;
    printf("The value of a/b is %f",c);
    printf("The value of d is %d",d);//demoted to  int

    return 0;
}