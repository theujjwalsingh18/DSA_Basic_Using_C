#include<stdio.h>
int count =0;
void tower(int n , char frompil , char topil , char auxpil){
    // Base Condition 
    if (n==1)
    {
        printf("\nMove disk 1 from piller %c to piller %c",frompil,topil);
        count ++;
    }else
    {
    // Calling twice to ove remaining plates from aux piller to rest piller
    tower(n-1,frompil,auxpil,topil);
    printf("\nMove disk %d from piller %c to piller %c",n,frompil,topil);
    tower(n-1, auxpil,topil,frompil);
    count ++;
    }
}

int main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d",&num);
    printf("\nThe Sequences of moved involved in Tower of Hanoi are : \n");
    tower(num,'A','B','C');
    printf("\n\nSolved Tower of Hanoi in %d rounds \n\n",count);
    return 0;
}