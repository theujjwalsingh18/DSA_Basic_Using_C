#include<stdio.h>
int facto(int num)
{
    if (num == 0){
        return 1;
    } 
    else
    {
        return num * facto(num-1);
    }
}

int main()
{
    int num;
    printf("\nEnter a positive number : ");
    scanf("%d",&num);
    int load_fact=facto(num);
    printf("\nThe Factorial of %d is = %d",num,load_fact);
    return 0;
}