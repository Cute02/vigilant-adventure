#include <stdio.h>
int main() {
    int a,b, c;
    printf("Enter three numbers: ");
    
    scanf("%d%d%d",&a, &b, &c);
        if (a>b){
            printf("The number %d is larger", a);
        }else if (a>c){
            printf("The number %d is larger", a);
        }else if(b>c) {
            printf("The number %d is larger", b);
        
        }else {
            printf("The number %d is larger", c);
        }      
    return 0;
}