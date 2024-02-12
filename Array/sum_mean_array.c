#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n,sum=0;
    float mean =0.0;
    printf("\nEnter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("array[%d] is : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
        
    }
    mean = (float)sum/n;
    printf("\nSum Of Array Elements are : %d\n",sum);
    printf("\nThe mean of the array elments = %.2f",mean);
    return 0;
}