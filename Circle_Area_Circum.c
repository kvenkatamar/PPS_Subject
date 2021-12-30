#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int r;
    float circum, area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    circum = 2 * PI * r;
    area = PI*pow(r, 2);
    printf("The circumference of the circle = %.2f \n", circum);
    printf("The area of the circle = %.2f", area);


    return 0;
}