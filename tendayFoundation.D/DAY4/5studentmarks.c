#include <stdio.h>
#include <stdlib.h>

int main(){
    int marks[5];
    for(int i=0; i<5;i++){
        printf("Student %d marks: ", i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<5;i++){
        printf("Student %d marks: %d\n", i+1, marks[i]);
    }
}