#include <stdio.h>

int main() {
    int r; 
    int height;

    printf("Enter the radius\n");
    scanf("%d", &r); 


    printf("Enter the height\n");
    scanf("%d", &height); 
    

    printf("The Area of Circle with Radius %d is %f\n", r, 3.14 * r * r);
    printf("The volume of cylinder with Radius %d and height %d is %f\n", r,height, 3.14 * r * r*height);



    return 0; 
}
