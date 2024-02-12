#include<stdio.h>
#include<conio.h>


int main()
{
    int i, n, small, pos;
    printf("\nEnter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("array[%d] is : ",i);
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    pos = 0;

    // printf("\nYour Array Elements are : \n");

    for(i=1; i<n; i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos=i;
        }
    }
    printf("\nThe Smallest element is : %d",small);
    printf("\nThe position of smallest element in the array is : %d",pos);
    return 0;
}