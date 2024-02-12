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

struct Node * insertAtFirst(struct Node *head , int data )
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    
    ptr -> data = data;
    ptr -> next = head;
    return ptr;
}

struct Node * inserAtLast(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node * p = head;
    ptr -> data = data;

    while (p->next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
    
}

struct Node * insertAfterNode(struct Node * head, struct Node * prevNode , int data)
{
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));

    ptr -> data = data;
    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;

    return head;
}

struct Node * insertInBetween(struct Node * head, int index , int data )
{
    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node * p = head; 
    int i =0; 
    while (i != index-1)
    {
        p =p ->next;
        i ++;
    }
    ptr -> data = data;;
    ptr -> next = p -> next;
    p -> next = ptr ;

    return head;
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

   
    printf("\nOriginal Elements of Linked List are : \n\n");
    traversal(head);


    // printf("\nElement after adding at first : \n\n");
    // head =  insertAtFirst(head,56);
    // traversal(head);
    
    // printf("\nElement after adding at last : \n\n");
    // head = inserAtLast(head,99);
    // traversal(head); 

    printf("\nElement after adding after a node : \n\n");
    head = insertAfterNode(head,second,66);  
    traversal(head);

    // printf("\nElement after adding in between : \n\n");
    // head = insertInBetween(head, 3 , 425);
    // traversal(head);


    return 0;
}