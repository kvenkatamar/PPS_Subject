#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int r, h;
    float lsa, tsa, volume;
    printf("Enter the radius and height of a cylinder: ");
    scanf("%d %d", &r, &h);
    lsa = 2*PI*r*h;
    tsa = 2*PI*r*(r + h);
    volume = PI*pow(r, 2)*h;
    printf("The Lateral surface area of a cylinder = %.2f\n", lsa);
    printf("The Total surface area of a cylinder = %.2f\n", tsa);
    printf("The Volume of a cyclinder = %f", volume);
    return 0;
}