#include<stdio.h>

int main(){

    int Eng , Maths, Bio;

    printf("Enter marks for English\n");
    scanf("%d",&Eng);

    printf("Enter marks for \n");
    scanf("%d",&Maths);

    printf("Enter marks for Biology\n");
    scanf("%d",&Bio);

    if(Eng<33 || Maths<33 || Bio<33)
    {
        printf("You are failed due to less marks in an individual subject");
    }

    else if(Eng+Maths+Bio/3<40)
    {
        printf("You are failed due to less percentage");
    }

    else
    {
        printf("You are passed");
    }
    
    return 0;
}