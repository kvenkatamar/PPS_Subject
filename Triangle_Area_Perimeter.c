#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, perimeter;
    float s, area;
    printf("Enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    // compute perimeter
    perimeter = a + b + c;
    printf("Perimeter of the triangle = %d \n", perimeter);
    /* compute s */
    s = (a + b + c)*0.5;
    // compute area
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of a triangle = %f \n", area);
    return 0;
}