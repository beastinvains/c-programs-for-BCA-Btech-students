#include<stdio.h>
void main(){
    float a;
    printf("enter celsius ");
    scanf("%f",&a);
    a=a*9/5+32;
    printf("fahrenheit is %f",a);
}