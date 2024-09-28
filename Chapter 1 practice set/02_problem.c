#include <stdio.h>

int main() {
    int r; 

    printf("Enter the radius\n");
    scanf("%d", &r); 
    
    printf("The Area of Circle with Radius %d is %f\n", r, 3.14 * r * r);

    return 0; 
}
