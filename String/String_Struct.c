#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * insertAtNode(struct Node * head, int data ,struct Node * prevNode)
{
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr -> data = data;
    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;

    return head;
}

void traverslist(struct Node * head)
{
    while(head != NULL)
    {
        printf("Element are : %d \n", head -> data);
        head = head -> next;
    }
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    head = (struct Node *)malloc (sizeof(struct Node));
    second = (struct Node *)malloc (sizeof(struct Node));
    third = (struct Node *)malloc (sizeof(struct Node));
    forth = (struct Node *)malloc (sizeof(struct Node));

    head -> data = 20;
    head -> next = second;
    second -> data = 30;
    second -> next = third;
    third -> data = 40;
    third -> next = forth;
    forth -> data = 50;
    forth -> next = NULL;

    printf("\nOriginal Linked list are : \n");
    traverslist(head);

    printf("\nElements after inserting in linked list are : \n");
    head = insertAtNode(head,66,second);
    traverslist(head);
    return 0;
}