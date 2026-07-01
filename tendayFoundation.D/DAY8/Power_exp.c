#include <stdio.h>

int power(int b, int ex){
    if(ex==0){
        return 1;
    }
    return b*power(b, ex-1);
}
int main(){
    int base=2, exp=8;
    printf("%d to the power of %d is %d", base, exp, power(base, exp));
}