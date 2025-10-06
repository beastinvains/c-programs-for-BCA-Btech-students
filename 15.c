#include <stdio.h>
void main (){
    int a,b,c;
    printf("enter 3 no ");
    scanf("%d %d %d",&a,&b,&c);
    a>b&&a>c?printf("A is biggest"):b>a &&b>c?printf("B is biggest"):printf("C is biggest");
}