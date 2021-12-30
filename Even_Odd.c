#include<stdio.h>

int main(){
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    if(a/2 == 0){
        printf("It's an even number");
    }
    if(a/2 != 0){
        printf("It's an odd number");
    }
    return 0;
}