#include<stdio.h>
#include<math.h>

int main(){
    int s, perimeter;
    float area;
    printf("Enter a side of the square: ");
    scanf("%d", &s);
    perimeter = 4 * s;
    area = pow(s, 2);
    printf("The perimeter of a square = %d\n", perimeter);
    printf("The area of a square = %.2f", area);
    return 0;
}