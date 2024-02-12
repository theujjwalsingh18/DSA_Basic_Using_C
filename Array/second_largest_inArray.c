#include<stdio.h>


int main()
{
    int i, n, large,second_large;
    printf("\nEnter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("array[%d] is : ",i);
        scanf("%d",&arr[i]);
    }
    large = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }

    second_large=arr[1];
    for(i=0;i<n;i++)
    {
        if (arr[i] != large)
        {
            if (arr[i] > second_large)
            {
                second_large=arr[i];
            }
        }
    }
    printf("\nThe Largest element is : %d",large);
    printf("\nThe Second largest element in the array is : %d",second_large);
    return 0;
}