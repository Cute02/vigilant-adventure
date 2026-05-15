#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
// FRONT and REAR pointers
Node* front = NULL;
Node* rear = NULL;
// Enqueue
void enqueue(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL){
        front = rear = newNode;
        return;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d inserted into queue\n", value);
}
// Dequeue
void dequeue(){
    if (front == NULL){
        printf("Queue underflow\n");
        return;
        Node* temp = front;
        printf("%d removed from queue\n", front->data);
        front=front->next;
        if (front == NULL){
            rear == NULL;
        }
        free(temp);
    }
}
void display(){
    if(front == NULL){
        printf("Queue is empty\n");
        return;
    }
        Node* temp = front;
        printf("\nQueue\n");
        while (temp!=NULL){
            printf("%d\n", temp->data);
            temp=temp->next;
        }
        printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}