#include<stdio.h>
#include<math.h>

int main(){
    int s, lsa, tsa, volume;
    printf("Enter the side of a cube: ");
    scanf("%d", &s);
    lsa = 4*pow(s, 2);
    tsa = 6*pow(s, 2);
    volume = pow(s, 3);
    printf("The Lateral surface area of a cube = %d\n", lsa);
    printf("The Total surface area of a cube = %d\n", tsa);
    printf("The Volume of a cube = %d", volume);
    return 0;
}