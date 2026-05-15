#include <stdio.h>
#include <stdlib.h>
// Node structure
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

};
// to create node
struct Node* createNode(int value){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// PREORDER ROOT LEFT RIGHT
void preorder(struct Node* root){
    if (root==NULL)
    return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
//INORDER LEFT ROOT RIGHT
void inorder(struct Node* root){
    if (root==NULL)
        return;
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
}
// POSTORDER LEFT RIGHT ROOT
void postorder(struct Node* root){
    if (root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main(){
    struct Node*root = createNode(11);           // 11
    root->left = createNode(22);              // 22   33
    root->right = createNode(33);           // 44 55  66 77
    root->left->left = createNode(44);
    root->left->right = createNode(55);
    root->right->left = createNode(66);
    root->right->right = createNode(77);
    printf("Preorder: ");
    preorder(root); //11 22 44 55 33 66 77
    printf("\nInorder:");
    inorder(root); //44 22 55 11 66 33 77
    printf("\nPostorder:");
    postorder(root); // 44 55 22 66 77 33 11
    return 0;
}