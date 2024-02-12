#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void traversal( struct Node* ptr){
    while (ptr != NULL){
        printf("Element %d \n" , ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Creating nodes 
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // allowing memory to each node 
    head=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));

    // linking each nodes

    head -> data= 7;
    head -> next = second;

    second -> data = 18;
    second -> next = third;

    third -> data = 45;
    third -> next = NULL;

    // traversal(head);
        // while (head != NULL){
        // printf("Element %d \n" , head->data);
        // head = head->next;
        // }
        printf("\n");
        for (struct Node *current = head; current != NULL ; current = current-> next)
        {
            printf("%d -> ", current->data);
        }
        printf("\n");
    
    return 0;
}