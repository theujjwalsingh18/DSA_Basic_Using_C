#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array yow want to create\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i <n; i++)
    {
        printf("Enter the value no %d of this array \n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i <n; i++)
    {
        printf("The value at %d of this array is %d\n", i,ptr[i]);
    } 


    free(ptr);

    // Using again our_POINTER__

    int num;
    printf("Enter the size of the array yow want to create\n");
    scanf("%d",&num);
    ptr = (int *)calloc(num , sizeof(int));

    for (int i = 0; i <num; i++)
    {
        printf("Enter the new value no %d of this array \n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i <num; i++)
    {
        printf("The new value at %d of this array is %d\n", i,ptr[i]);
    } 
    return 0;
}
