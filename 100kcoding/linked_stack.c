#include <stdio.h>
#include <stdlib.h>
// Node structure
typedef struct Node{
    int data;
    struct Node* next;
} Node;

// Top pointer
Node* top = NULL;

// Push operation
void push(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed into stack\n", value);
}

// Pop operation
void pop(){
    if (top == NULL){
        printf("Stack underflow\n");
        return;
    }
    Node* temp = top;
    top = top->next;
    free(temp);
    printf("Element popped from stack\n");
}
void display(){
    if (top == NULL){
        printf("Stack is empty\n");
        return;
    }
    Node* temp = top;
    printf("\nStack:\n");
    while (temp!=NULL){
        printf("%d\n", temp->data);
        temp= temp->next;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}