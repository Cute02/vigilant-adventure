#include <stdio.h>
int main(){
    int a=7;
    printf("val(a)=%d\n", a);
    printf("adr(a)=%x\n", &a);
    int *p;
    printf("val(p)=%x\n", p);
    p=&a;
    printf("val(p)=%x\n", p);
    printf("cont(p)=%d\n", *p);
    printf("adr(p)=%x\n", &p);
    return 0;
}