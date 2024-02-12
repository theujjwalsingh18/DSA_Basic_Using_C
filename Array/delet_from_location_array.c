#include<stdio.h>

int main()
{
    int i , n , pos;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n); 
    int array[n];

    for(i=0;i<n;i++)
    {
        printf("\narray[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the postion from which the number has to be deleted : ");
    scanf("%d",&pos);
    for(i=pos; i<n-1; i++)
    {
        array[i]=array[i+1];
    }
    n--;
    printf("\nThe array after deletion is : \n");
    for(i=0; i<n; i++)
    {
        printf("\narray[%d] = %d\n",i,array[i]);
    }
    return 0;
}