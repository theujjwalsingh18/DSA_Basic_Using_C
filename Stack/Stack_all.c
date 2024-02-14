#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5
int stack[CAPACITY], top = -1;

int isFull()
{
    if(top == CAPACITY -1)
    {
        return 1;
    }
    else
    {
        return 0; 
    }
}

int isEmpty()
{
    if (top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(int elm )
{
    if(isFull())
    {
        printf("Stack is overflow \n");
    } 
    else
    {
        top ++;
        stack[top]= elm ;
        printf("%d is pushed \n",elm);
    }
}

int pop()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top --];
    }
}

void peek()
{
    if(isEmpty())
    {
        printf("Stack is underflow \n");
    }
    else
    {
        printf("Peak element is : %d \n", stack[top]);
    }
}

void traverse()
{
    if (isEmpty())
    {
        printf("Stack is Empty \n");
    }else
    {
        int i;
        printf("Stack elements are : \n");
        for (i=0; i< CAPACITY; i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}


int main()
{
    int ch , item ;
    while (1)
    {
        printf("\nEnter what you want to perform in Stack : ");
        printf("\n1.Push \n2.Pop \n3.Peek \n4.Traverse \n5.Exit \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 :printf("Enter element you want to add : ");
                scanf("%d", &item);
                push(item);
                break;

        case 2 :item = pop();
                if (item == 0)
                {
                    printf("Stack is underflow \n");
                }
                else{
                    printf("Popped item is : %d\n", item);
                }
                break;
        case 3 : peek();
                 break;
        case 4 : traverse();
                 break;
        case 5 : exit(0);
        default:printf("\nInvalid input ");
            
        }

    }

    return 0;
}