#include<stdio.h>
int main(){
    float w, h, BMI;
    printf("Enter your weight: ");
    scanf("%f", &w);
    printf("Enter your height: ");
    scanf("%f", &h);
    BMI = (w*100)/(h*h);
    printf("BMI = %.2f", BMI);
    return 0;
}