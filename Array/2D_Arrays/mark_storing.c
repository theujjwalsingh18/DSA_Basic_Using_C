#include<stdio.h>

int main()
{
    int marks[5][3], i, j, max_marks;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the marks obtained by Student %d",i+1);
        for(j=0;j<3;j++)
        {
            printf("\nmarks[%d][%d] = ",i,j);
            scanf("%d",marks[i][j]);
        }

    }

    for(j=0;j<3;j++)
    {
        max_marks=-999;
        for(i=0;i<5;i++)
        {
            if(marks[i][j]>max_marks)
            {
                max_marks=marks[i][j];
            }
            printf("\nThe heighest marks obtained in the subject %d = %d",j+1,max_marks);
        }
    }
    return 0;
}