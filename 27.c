#include<stdio.h>
void main(){
    int a,r=0;
    printf("enter no you find the sum of ");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        r+=i;
        printf("%d + ",r);

    }

}