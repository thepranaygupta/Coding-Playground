#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

void printPostorder(struct node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ", node->data);
}

void printInorder(struct node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

void printPreorder(struct node *node)
{
    if (node == NULL)
        return;

    printf("%d ", node->data);

    printPreorder(node->left);

    printPreorder(node->right);
}

struct node *insertAny(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);

    if (key < node->data)
        node->left = insertAny(node->left, key);
    else
        node->right = insertAny(node->right, key);

    return node;
}

int flag = 0;
void searchNode(struct node *temp, int value)
{
    if (temp == NULL)
    {
        printf("Tree is empty\n");
    }
    else
    {
        if (temp->data == value)
        {
            flag = 1;
            return;
        }
        if (flag == 0 && temp->left != NULL)
            searchNode(temp->left, value);

        if (flag == 0 && temp->right != NULL)
            searchNode(temp->right, value);
    }
}

int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);

    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);

    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);

    insertAny(root, 6);
    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);

    searchNode(root, 6);
    if (flag)
        printf("\nElement is present in the binary tree");
    else
        printf("\nElement is not present in the binary tree");
    return 0;
}