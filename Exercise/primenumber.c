#include<stdio.h>
int main()
{
    int flag =0, i, num;
    
    printf("\nEnter any number : ");
    scanf("%d", & num);
    if (num==0 || num==1)
    { 
        flag=2;
    }
    else{
        for (i=2; i<num/2 ; i++)
        {
            if (num % i ==0){
                flag=1;
                break;
            }
        }
    }

    if (flag==1){
        printf("\n%d is a composite number", num);
    }
    else if (flag==2)
    {
        printf("\n%d is neither prime nor composite",num);
    }
    else {
        printf("\n%d is a prime number ", num);
    }
    
    return 0;
}