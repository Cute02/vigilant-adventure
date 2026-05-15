#include <stdio.h>
#include "tree.h"

#define COUNT 6

void printTreeUtil(Person* root, int space, int isLeft) {
    if (root == NULL)
        return;

    space += COUNT;

    // print father (top side)
    printTreeUtil(root->father, space, 1);

    printf("\n");

    // print vertical lines
    for (int i = COUNT; i < space; i++) {
        printf(" ");
    }

    // print branches
    if (space != COUNT) {
        if (isLeft)
            printf("┌── ");
        else
            printf("└── ");
    }

    printf("%s\n", root->name);

    // print mother (bottom side)
    printTreeUtil(root->mother, space, 0);
}

void printHorizontal(Person* root, int space) {
    printTreeUtil(root, 0, 0);
}