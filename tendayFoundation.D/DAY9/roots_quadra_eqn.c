#include <stdio.h>
#include <math.h>
int main(){
    float a=1,b=-5,c=6;
    if(a==0){
        printf("Not a quadratic equation");
    }else{
        float d= b*b - 4*a*c;
        if(d<0){
            printf("No real roots exist..");
        }else if(d==0){
            printf("Two equal roots\n");
            float r1=-b/(2*a);
            printf("The roots are %.2f & %.2f", r1, r1);

        }else if(d>0){
            printf("Two distinct roots\n");
            float r1=(-b+sqrt(d))/(2*a);
            float r2=(-b-sqrt(d))/(2*a);
            printf("The roots are %.2f  & %.2f", r1, r2);

    }
    }
}