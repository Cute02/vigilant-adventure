#include <stdio.h>
// a=b=c=60 equilateral

int main(){
    int a=100, b=50, c=30;
    if(a+b+c==180){
        if(a<90 && b<90 && c<90){
            printf("The triangle is acute");
        }else if((a==90||b==90||c==90)){
            printf("The triangle is right triangle");
        }else if(a>90 || b>90 || c>90){
            printf("The triangle is obtuse");
        }
    }else{
        printf("Not a valid triangle");
    }
    return 0;
}