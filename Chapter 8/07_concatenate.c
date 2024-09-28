#include<stdio.h>
#include<string.h>

int main(){
    
    char s1[12]="hello";

    char s2[]=" Deven";

    strcat(s1,s2);

    printf("%s \n",s1);   //strings are concatenated no need to call s2
    
    return 0;
}