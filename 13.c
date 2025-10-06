#include <stdio.h>
void main (){
    int a;
    printf("enter no ");
    scanf("%d",&a);
    if (a>0){
        printf("it positive");
    }
    else if (a<0){
        printf("it negative");
    }
    else{
        printf("it is zero");
    }
}