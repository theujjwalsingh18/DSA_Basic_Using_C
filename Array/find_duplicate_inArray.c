#include<stdio.h>

int main()
{
    int i , n , j , flag =0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    int array[n];

    for(i=0;i<n;i++)
    {
        printf("\narray[%d] = ",i);
        scanf("%d",&array[i]);
    }
    for (i =0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            if (array[i] == array[j] && i != j)
            {
                flag = 1;
                printf("\nDuplicate number found at location %d and %d", i,j);
            }
        }
    }
    if (flag==0)
    {
        printf("\nNo Duplicates Found");
    }
    return 0;
}