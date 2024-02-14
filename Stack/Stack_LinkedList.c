#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node * top = NULL;

int isEmpty() {
    return top == NULL;
}

void push(int item) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("\nStack overflow!\n");
        exit(1); 
    }
    newNode->data = item;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (isEmpty()) {
        printf("\nStack underflow!\n");
        exit(1); 
    }
    Node* temp = top;
    int poppedData = temp->data;
    top = top->next;
    free(temp);
    return poppedData;
}

void peek() {
    if (isEmpty()) {
        printf("\nStack is empty!\n");
    }
    else{
        printf("\nPeak element is : %d\n",top->data);
    }
}
void traverse(){
    Node * ptr = top;
    while(ptr != NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr -> next;
    }
    printf("NULL\n");
    }

int main() {
    int ch , item ;
    while (1)
    {
        printf("\nEnter what you want to perform in Stack : ");
        printf("\n1.Push \n2.Pop \n3.Peek \n4.Traverse \n5.Exit \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 :printf("\nEnter element you want to add : ");
                scanf("%d", &item);
                push(item);
                break;

        case 2 :item = pop();
                if (item == 0)
                {
                    printf("\nStack is underflow \n");
                }
                else{
                    printf("\nPopped item is : %d\n", item);
                }
                break;
        case 3 : peek();
                 break;
        case 4 : traverse();
                 break;
        case 5 : exit(0);
        default:printf("\nInvalid input \n");
            
        }

    }

    return 0;
}