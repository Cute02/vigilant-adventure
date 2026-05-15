#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
int main(){
    // Enqueue
    for(int i=0; i<SIZE; i++){
        printf("Enter the number: ");
        scanf("%d",&queue[i]);
        rear++;
    }
    // Dequeue
    printf("QUEUE after Dequeue:");
    for(int i=front+1;i<=rear;i++){
        printf("%d\n", queue[i]);
        front++;
    }
    
    
        if (front == rear){
            printf("Queue is empty");
        }        
}
