#include <stdio.h>

int main(){
    char letter;
    printf("Enter the alphabet letter you want to check: ");
    scanf("%c", &letter);
    switch(letter){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("%c is a vowel..", letter);
        break;
        default :
        printf("The character %c is a consonant", letter);
    }
    return 0;
}