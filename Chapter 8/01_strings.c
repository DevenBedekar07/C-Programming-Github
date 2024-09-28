#include<stdio.h>

int main(){
    
    char st[]={'a','b','c','\0'};   //(\0) null character marks the end of the string
    // char st[]="abc";  //Same as doing  char st[]={'a','b','c','\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("Character is %c \n",st[i]);
        
    }
    
   
    
 
    return 0;
}