#include<stdio.h>
void main(){
    int a=0,r=0,temp=0,b;
    scanf("%d",&b);
    temp = b;
    while(temp!=0){
        r=temp%10;
        a=a*10+r;
        temp=temp/10;

    }
    if (b==a){
        printf("it is");
    }else{
        printf("it is not");
    }
}