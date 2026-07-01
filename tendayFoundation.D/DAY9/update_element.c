#include <stdio.h>

int main(){
    int arr[]= {1,2,3,4,6,7,8};
    int index, element;
    printf("Enter the element u want to add: ");
    scanf("%d", &element);
    printf("Enter the index you want to update the element in: ");
    scanf("%d", &index);
    arr[index]=element;
    for(int i=0; i<7;i++){
        printf("%d\t", arr[i]);
    }
}