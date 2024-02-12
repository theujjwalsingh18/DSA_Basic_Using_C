#include<stdio.h>

int main()
{
    int array[]={1,2,3,4,5};
    // printf("\nAddress of array = %p %p %p", array,&array[0], &array);
    // all values are same : 0061FFOC 0061FFOC 0061FFOC 
    int *ptr = &array[0];
    ptr++;
    // printf("\nThe value of the second elements of the array is %d",*ptr);

    int *ptr2, i;
    ptr2=&array[2]; // *ptr2 = 3
    *ptr2 = -1; // array[2] = -1
    *(ptr2 + 1) = 0; // array[3]= 0
    *(ptr2 - 1) = 1;// array[1]= 1
    printf("\nArray is : "); // array[] = {1,1,-1,0,5}
    for(i=0; i<5; i++)
    {
        printf(" %d",*(array+i));
    }

    return 0;
}