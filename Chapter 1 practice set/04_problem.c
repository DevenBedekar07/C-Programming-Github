#include<stdio.h>

int main(){
    
    float p;
    float r;
    float t;


    printf("Enter the principal amount");
    scanf("%f",&p);

      printf("Enter the Rate of Interest");
    scanf("%f",&r);

      printf("Enter the time");
    scanf("%f",&t);


    printf("The Simple interest is %f",(p*r*t)/100);
    return 0;
}