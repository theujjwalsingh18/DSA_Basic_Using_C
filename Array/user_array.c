#include<stdio.h>

int main()
{
    int i, n;
    printf("\nEnter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("array[%d] is : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nYour Array Elements are : \n");
    for(i=0; i<n; i++)
    {
        printf("array[%d] is %d \n",i,arr[i]);
    }
    return 0;
}