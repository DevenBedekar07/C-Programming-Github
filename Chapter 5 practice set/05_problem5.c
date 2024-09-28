// 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);






#include<stdio.h>

int main(){
    
    int a = 4;
    printf("%d %d %d \n", a,++a,a++);   //here evaluation order is not defined c
    return 0;                           //compiler determine the order on its own
}                                       //  which is mostly right to left 
                                        // hence both 6,6,4 and 4,5,5 are correct