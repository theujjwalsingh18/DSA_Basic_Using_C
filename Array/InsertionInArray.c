#include<stdio.h>

int main()
{
    int i , n , pos , value;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n); 
    int array[n];

    for(i=0;i<n;i++)
    {
        printf("\narray[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the the number has to be inserted : ");
    scanf("%d",&value);
    printf("\nEnter the postion at which the number has to be inserted : ");
    scanf("%d",&pos);
    for(i=n-1; i>=pos; i--)
    {
        array[i+1]=array[i];
    }
    array[pos]=value;
    n++;
    printf("\nThe array after deletion is : \n");
    for(i=0; i<n; i++)
    {
        printf("\narray[%d] = %d\n",i,array[i]);
    }
    return 0;
}