#include<stdio.h>

int main()
{
    int i , n , pos, delnum;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n); 
    int array[n];
    int findPostion(int num){
        for (i =0; i<n; i++)
        {
            if (num == array[i])
            {
                printf("%d",i);
                return i;
            }
            else{
                return -1;
            }
        }
}
    for(i=0;i<n;i++)
    {
        printf("\narray[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the element want to delete : ");
    scanf("%d",&delnum);
    pos = findPostion(delnum);
    if(pos != -1)
    {
        for(i=pos; i<n-1; i++)
        {
            array[i]=array[i+1];
        }
        n--;
        printf("\nThe array after deletion is : \n");
        for(i=0; i<n; i++){
        printf("\narray[%d] = %d\n",i,array[i]);
        }
    }else{
        printf("\nElement not found in Array\n");
    }
    return 0;
}