#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum Gender {
    MALE, 
    FEMALE
} Gender;
/* Tree Node */
typedef struct Node {

    char name[50];
    int age;
    Gender gender;

    struct Node* left;   // Mother
    struct Node* right;  // Father

} Node;

/* Create Node */
Node* createNode(char name[], int age, Gender gender) {

    Node* newNode = (Node*)malloc(sizeof(Node));

    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->gender = gender;

    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/* Print Tree */
void printTree(Node* root) {

    if (root == NULL)
        return;

    printf("Person : %s, Age : %d, Gender : %s\n", root->name, root->age, (root->gender == MALE ? "Male" : "Female"));

    if (root->left != NULL)
        printf("Mother : %s, Age : %d, Gender : %s\n", root->left->name, root->left->age, (root->left->gender == MALE ? "Male" : "Female"));

    if (root->right != NULL)
        printf("Father : %s, Age : %d, Gender : %s\n", root->right->name, root->right->age, (root->right->gender == MALE ? "Male" : "Female"));
}

/* Main */
int main() {

    /* Child */
    Node* child = createNode("Neha", 17, FEMALE);

    /* Parents */
    Node* mother = createNode("Sneha", 43, FEMALE);
    Node* father = createNode("Tojo", 44, MALE);

    /* Connect Parents */
    child->left = mother;
    child->right = father;

    /* Print */
    printTree(child);

    return 0;
}