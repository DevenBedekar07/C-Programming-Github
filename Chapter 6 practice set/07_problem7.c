//7. Try problem 3 using call by value and verify that it does not change the value of
// the said variable.

#include<stdio.h>
void change_to_ten_times(int a);

void change_to_ten_times(int a)
{
  a=a*10;
}

int main(){
    
    int x=45;
    printf("Before changing the value of variable is %d\n",x);
    change_to_ten_times(x);
    printf("After changing the value of variable is %d\n",x);

    return 0;
}