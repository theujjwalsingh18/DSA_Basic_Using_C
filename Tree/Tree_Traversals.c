#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node* createNode(int data)
{
    struct Node* n =(struct Node*)malloc(sizeof(struct Node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;

    return n;
}

void preOrder(struct Node * root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}


void inOrder(struct Node * root)
{
    if(root != NULL)
    {
        preOrder(root->left);
        printf("%d ",root->data);
        preOrder(root->right);
    }
}


void postOrder(struct Node * root)
{
    if(root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    struct Node *n=createNode(4);
    struct Node *n1=createNode(1);
    struct Node *n2=createNode(6);
    struct Node *n3=createNode(5);
    struct Node *n4=createNode(2);
    // Tree Reprentation
    /*    4
         / \
        1   6
       / \ 
      5  2

    */

    n ->left=n1;
    n -> right = n2;
    n1 ->left = n3;
    n1 ->right = n4;

    printf("\nThe PreOrder tree are : ");
    preOrder(n);

    // printf("\nThe InOrder tree are : ");
    inOrder(n);

    // printf("\nThe PostOrder tree are : ");
    // postOrder(n);
    printf("\n");


}