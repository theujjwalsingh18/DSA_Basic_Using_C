#include<stdio.h>

int main()
{
    int LA[]={1,3,5,7,8}, item=5, n=5, i =0, j=0;
    printf("\nThe original array elemnts are : ");
    for(i =0; i<n ; i++){
        printf("LA[%d] = %d \n",i,LA[i]);
    }
    while(j<n)
    {
        if (LA[j] == item){
            break;
        }
        j = j +1;
    }
    printf("Found element is %d at position %d \n",item,j+1);
    return 0;
}