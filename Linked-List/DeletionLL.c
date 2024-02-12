#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

void traversal( struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d \n" , ptr->data);
        ptr = ptr->next;
    }
}

struct Node * deletfirst(struct Node * head)
{
    struct Node * ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

struct Node * deletAtIndex(struct Node * head, int index)
{
    struct Node * ptr = head;
    struct Node * qtr = head -> next;

    for (int i =0 ; i<index-1 ; i++)
    {
        ptr = ptr -> next;
        qtr = qtr -> next;
    }
    ptr -> next = qtr -> next;
    free(qtr);

    return head;
}

struct Node * deletlast(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = head -> next;

    while(q->next != NULL){
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

struct Node * deletByValue(struct Node * head , int value)
{
    struct Node * p = head;
    struct Node * q = head -> next;

    while (q-> data != value && q -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    if ( q-> data == value)
    {
        p -> next = q -> next;
        free(q);
    }

    return head ;
}

int main()
{
     // Creating nodes 
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    // allowing memory to each node 
    head=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));
    forth=(struct Node*) malloc(sizeof(struct Node)); 
 
    // linking each nodes

    head -> data= 7;
    head -> next = second;

    second -> data = 18;
    second -> next = third;

    third -> data = 45;
    third -> next = forth;

    forth -> data = 1;
    forth -> next = NULL;

    printf("Original Linked-List is : \n");
    traversal(head);
    int per;
    printf("\nSelect operation you want to perform in deleting : \n1.Deleting Head Node \n2.Deleting Last Node \n3.Deleting a Node in between \n4.Deleting a particular element \n");
    scanf("%d",&per);
    if (per == 1)
    {
    printf("\nAfter deleting head of linked-list \n");
    head = deletfirst(head);
    traversal(head);
    }
    else if (per == 2)
    {
    printf("\nAfter deleting last node : \n");
    head = deletlast(head);
    traversal(head);
    }
    else if (per == 3)
    {
    printf("\nDeleting elemment at index 2\n");
    head= deletAtIndex(head,2);
    traversal(head);
    }
    else if (per == 4)
    {
    printf("\nAfter deleting a particular element in linked list : \n");
    head = deletByValue(head,45);
    traversal(head);
    }
    else{
        printf("Please enter a valid operations \n");
    }
    
    return 0;
}