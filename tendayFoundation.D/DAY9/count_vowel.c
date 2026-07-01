#include <stdio.h>

int main(){
    char arr[]={'H','E','l', 'L', 'o', 'h', 'I', 'l', 'a', };
    int count=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if (arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||
            arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'|| arr[i]=='u'){
                count++;
            }
    }
    printf("%d", count);

}