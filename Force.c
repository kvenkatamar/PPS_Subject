#include<stdio.h>
int main(){
    int m, a, force;
    printf("Enter mass: ");
    scanf("%d", &m);
    printf("Enter acceleration: ");
    scanf("%d", &a);
    force = m*a;
    printf("The force = %d", force);
    return 0;
}