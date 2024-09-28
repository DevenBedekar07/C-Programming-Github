#include<stdio.h>

int main(){
    int i=6;
    int* j=&i;
    int** k=&j;
    
    // * se & kat jaata h  ***&&&= a  if unable to recall watch code with harry


    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));

        return 0;
}