#include<stdio.h>
void main (){
    int a=5,b=10;
    printf("A and B %d",a&b);
    printf("\nA or B %d",a|b);
    printf("\nA xor B %d",a^b);
    printf("\nnot A %d",~a);
    printf("\nA left shift 1 %d",a<<1); 
    printf("\nB right shift 1 %d",b>>1);
}