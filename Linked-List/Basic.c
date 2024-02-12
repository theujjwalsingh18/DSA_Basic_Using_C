#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

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

    return 0;
}