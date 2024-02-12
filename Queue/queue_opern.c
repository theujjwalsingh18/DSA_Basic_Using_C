#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int queue [CAPACITY], front = 0, rear =0, i;

int isFull(){
    if (rear == CAPACITY)
    {
        return 1;
    }else{
        return 0;
    } 
}

int isEmpty(){
    if (front == rear)
    {
        return 1;
    }
    return 0;
    
}
void insert(int num)
{
    if(isFull())
    {
        printf("\nQueue is Full\n");
    }
    queue[rear] = num;
    rear ++;
}

int delete()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty\n");
    }
    int delnum = queue[front];
    for(i =1; i<rear; i++)
    {
    queue[i - 1] = queue[i];
    }
    rear --;
    return delnum;
    
}

void peek(){
    if(isEmpty){
        printf("\nQueue is Empty\n");
    }
    printf("Peek Element is : %d",queue[rear]);
}


void traverse()
{
    if(isEmpty)
    {
        printf("\nQueue is Empty\n");
    }
    else{
        printf("\nQueue Elements are : ");
        for(i=front ; i<rear ; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int ch , item;
    while (1)
    {
        printf("\nEnter what you want to perform in Queue : ");
        printf("\n1.Insert \n2.Delete \n3.Peek \n4.Traverse \n5.Exit \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 :printf("Enter element you want to add : ");
                scanf("%d", &item);
                insert(item);
                break;

        case 2 :item = delete();
                if (item == 0)
                {
                    printf("Stack is underflow \n");
                }
                else{
                    printf("Deleted item is : %d\n", item);
                }
                break;
        case 3 : peek();
                 break;
        case 4 : traverse();
                 break;
        case 5 : exit(1);
        default:printf("\nInvalid input ");
            
        }

    }
    return 0;
}