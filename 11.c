#include<stdio.h>
void main (){
    int a=10,b=5,r;
    printf("a + b %d",a+=b);
    printf("\na - b %d",a-=b);
    printf("\na * b %d",a*=b);
    printf("\na / b %d",a/=b);
    printf("\na %% b %d",a%=b);
    printf("\na ^= b %d",a^=b);
    printf("\na |= b %d",a|=b); 
    printf("\na &= b %d",a&=b);
    printf("\na >>= b %lld",a>>=b);
    printf("\na <<= b %Lf",a<<=b);
    printf("\na = b %d",a==b);
}