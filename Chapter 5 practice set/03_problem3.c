// . Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2

#include<stdio.h>

float force(float m);

float force(float m)
{
    return m*9.8;
}

int main(){
    
    float m;

    printf("Enter the mass\n");
    scanf("%f",&m);

    printf("The Value of Force for mass %.2 f is %.2f",m,force(m));
    
    return 0;
}

