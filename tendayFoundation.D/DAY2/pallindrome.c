#include <stdio.h>
#include <stdlib.h>

int main(){
   int num, remainder, rev=0;
   printf("Enter the number to check if it is a pallindrome: ");\
   scanf("%d\n", &num);
   while(num!=0);{
    remainder = num%10;
    rev= rev*10 + remainder;
    num=num/10;
   }
   if(rev==num){
        printf("Entered number %d is a pallindrome.\n", num);
   }else{
        printf("Entered number %d is not a pallindrome.\n", num);

   }
}