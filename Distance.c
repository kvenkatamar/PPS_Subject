#include<stdio.h>
#include<math.h>

int main(){
    int u, t, a;
    float distance;
    printf("Enter the values of u, t, a: ");
    scanf("%d %d %d", &u, &t, &a);
    distance = u*t + 0.5*a*pow(t, 2);
    printf("The distance = %.2f", distance);
    return 0;
}