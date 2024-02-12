#include<stdio.h>

int main()
{
    int i , n1, n2, m, index=0;
    printf("\nEnter the size of the array1 : ");
    scanf("%d",&n1);
    int array1[n1];

    for(i=0;i<n1;i++)
    {
        printf("\narray1[%d] = ",i);
        scanf("%d",&array1[i]);
    }
    printf("\nEnter the size of the array2 : ");
    scanf("%d",&n2);
    int array2[n2];

    for(i=0;i<n2;i++)
    {
        printf("\narray2[%d] = ",i);
        scanf("%d",&array2[i]);
    }
    m = n1 + n2;
    int array3[50];
    for (i=0; i<n1; i++)
    {
        array3[index] = array1[i];
        index ++;
    }
    for (i=0; i<n2; i++)
    {
        array3[index] = array2[i];
        index ++;
    }
    printf("\nThe merged array is : ");
    for(i=0; i<m; i++)
    {
        printf("%d ",array3[i]);
    }
    return 0;
}