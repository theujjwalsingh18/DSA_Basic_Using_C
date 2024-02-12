#include<stdio.h>

int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9},i;
    while(i <= 8)
    {
        if( arr[i] %2==0)
        {
            printf("%d is Even and at index %d\n",arr[i],i);
        }
        else
        {
            printf("\n");
        }
        i += 1;
    }
    return 0;
}