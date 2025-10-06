#include <stdio.h>
void main (){
    int a,b,c,d;
    printf("enter 1 = addition\n 2 = subtraction\n 3 = multiplication\n 4 = division\n 5 = modulus\n");
    scanf("%d",&c);
    printf("enter no for arithmetic operation ");
    scanf("%d %d",&a,&b);
    switch (c)
    {
    case 1:
        d=a+b;
        break;
    case 2:
        d=a-b;
        break;
    case 3:
        d=a*b;
        break;
    case 4:
        d=a/b;
        break;
    case 5:
        d=a%b;
        break;
    
    default:
    printf("invalid input\n");
        break;
    }
    printf("result is %d",d);
}