#include<stdio.h>
int main(){
    int a, b, sum;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}