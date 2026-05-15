#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fp)(int, int); // pointer variable=*fp
    printf("adr(add)=%x\n", add); //adr(add) is the address of the function add
    printf("adr(fp)=%x\n", fp); //adr(fp) is the address of the pointer variable fp
    fp = add; //pointer=fp fp has an adr in it when fp =add, fp points to adr(add)
    printf("adr(add)=%x\n", add);
    printf("adr(fp)=%x\n", fp);
    printf("adr(&fp)=%x\n", &fp);
    printf("%d", fp(35, 5)); // 40
}