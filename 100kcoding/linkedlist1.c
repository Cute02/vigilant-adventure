#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head  = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));
    struct Node* fourth = malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=30;
    third->next=fourth;
    
    fourth->data= 25;
    fourth->next=NULL;

    struct Node* temp = head;

    printf("%d \n", temp->data);
    printf("%d \n", second->data);
    printf("%d \n", third->data);
    printf("%d \n", *(second->next)); // address of third
    printf("%d \n", fourth->data);
    printf("%d \n", fourth->next);
    

    free(head);
    free(second);
    free(third);
    return 0;
}