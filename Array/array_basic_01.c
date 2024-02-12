#include<stdio.h>

int main()
{
    int i, array[35];
    for(i=0;i<10;i++)
    {
        array[i]=-1;
    }
    for(i=0; i<10; i++)
    {
        printf("\n array[%d]is %d",i,array[i]);
    }
    return 0;
}