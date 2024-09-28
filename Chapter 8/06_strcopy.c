#include<stdio.h>
#include<string.h>

int main(){
    
    char st[]="Deven";

    char target[30]="RAJ";
    printf("Before coping the string target was %s \n",target);
    

    strcpy(target,st);

    printf("After copying the st target is %s  \n",target);
    
    return 0;
}