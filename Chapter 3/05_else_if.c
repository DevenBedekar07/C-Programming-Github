#include<stdio.h>

int main(){
    
    int age = 45;

    if(age>60){

        printf("You can drive and you are senior citizen");
    }

    else if(age>40){

        printf("You can drive  and you are elder");
    }

     else if(age>18){

        printf("You can drive  ");
    }

    else{
        printf("You cannot drive");    //else is optional ,if all the conditions failed then if will be played
    }
    return 0;
}