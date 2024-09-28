// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.


#include<stdio.h>

int sum_natural(int n);

// sum_natural(n)=1+2+3+4+5....+(n-1)+n
// sum_natural(n)=sum_natural(n-1)+n
int sum_natural(int n)
{
    if(n==1)
    {
        return 1;
    }

    return sum_natural(n-1)+n;
}

int main(){
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);
    
    printf("The sum of first %d natural number is %d",n,sum_natural(n));

    return 0;
}