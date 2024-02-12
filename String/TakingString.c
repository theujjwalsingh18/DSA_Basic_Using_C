#include<stdio.h>


int main()
{
    char str[35];
    printf("Please Enter a String : ");
    gets(str);
    printf("Using printf String is : %s \n",str);
    printf("Using puts : ");
    puts(str);
    return 0;
}