#include<stdio.h>
#include<math.h>
int main(){
    int a, b, sum;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    sum = pow((a + b), 2);
    printf("square(%d + %d) = %d", a, b, sum);
    return 0;
}