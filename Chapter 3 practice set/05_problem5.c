 #include<stdio.h>
 
 int main(){
    
    char ch;

    printf("Enter a character :\n");
    scanf("%c",&ch);

    printf("The character is: %c\n",ch);
    printf("The value of the given character is : %d\n",ch);
    

    if(ch>=97 && ch<=122)
    {
        printf("The character is a lowercase");
    }

    else
    {
        printf("The given character is not a lowercase");
    }
    return 0;
 }