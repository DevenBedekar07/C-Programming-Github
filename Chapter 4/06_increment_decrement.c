#include<stdio.h>

int main(){
    

    int i=5;

printf("The value of i is %d\n",i);

i=i+5;        

printf("The value of i is %d\n",i); //10

printf("The value of i is %d\n",i++); //10
printf("The value of i is %d\n",i);      //11

// i++ prints first then increments (Post increment operator)
// ++i first increments and then prints()

printf("The value of i is %d\n",++i);    //12

i+=2; // same as i=i+2

printf("The value of i is %d\n",i); //14



    return 0;
}