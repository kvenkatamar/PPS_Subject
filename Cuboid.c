#include<stdio.h>
#include<math.h>

int main(){
    int l, b, h, lsa, tsa, volume;
    printf("Enter the length, breadth and height of a cuboid: ");
    scanf("%d %d %d", &l, &b, &h);
    lsa = 2*h*(l+b);
    tsa = 2*(l*b + b*h + h*l);
    volume = l*b*h;
    printf("The Lateral surface area of a cuboid = %d\n", lsa);
    printf("The Total surface area of a cuboid = %d\n", tsa);
    printf("The Volume of a cuboid = %d", volume);
    return 0;
}