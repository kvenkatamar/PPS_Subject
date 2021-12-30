#include<stdio.h>
int main(){
    int a, b, c, sum, avg;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    printf("Enter your third number: ");
    scanf("%d", &c);
    sum = a + b + c;
    avg = sum/3;
    printf("The sum of %d, %d and %d is %d", a, b, c, sum);
    printf("\nThe average of %d, %d and %d is %d", a, b, c, avg);

    return 0;
}