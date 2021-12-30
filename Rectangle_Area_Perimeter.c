#include<stdio.h>

int main(){
    int l, b, perimeter, area;

    printf("Enter the length of a rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of a rectangle: ");
    scanf("%d", &b);

    perimeter = 2 * (l + b);
    area = l * b;

    printf("The perimeter of a rectangle = %d \n", perimeter);
    printf("The area of a rectangle = %d", area);


    return 0;
}