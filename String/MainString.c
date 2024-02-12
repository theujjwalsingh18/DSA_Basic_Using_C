#include<stdio.h>

void printStr(char str[])
{
    int i =0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    char str[]={'U','J','J','W','A','L','\0'};
    printStr(str);
    char str2[]="Ujjwal Singh";
    printf("\n");
    printStr(str2);
    return 0;
}