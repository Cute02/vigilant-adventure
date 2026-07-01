#include <stdio.h>

int main(){
    int a=210, b=45, c=100, second;
    //if(n1==n2 || n2==n3 || n1==n3){
    if((a>=b && a<=c) ||(a>=c && a<=b)){
        second =a;
        }
    else  if((b>=a && b<=c)|| b>=c && b<=a){
        second=b;
    }else{
        second=c;
    }
    printf("The second largest number is %d", second);
    return 0;
}