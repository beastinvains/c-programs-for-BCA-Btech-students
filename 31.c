#include<stdio.h>
void main(){
    int a=0,r=0;
    printf("enter no to find sum of digits ");
    scanf("%d",&a);
    while(a!=0){
        r+=a%10;
        a=a/10;
    }
    printf("sum of digits is %d",r);
}