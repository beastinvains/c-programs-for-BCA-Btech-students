#include <stdio.h>
void main(){
    int num,reverse=0,re;
    printf("enter no you want to find reverse of");
    scanf("%d",&num);
    while (num!=0){
        re=num%10;
        reverse=reverse*10+re;
        num=num/10;
    }
    printf("reverse of no is %d",reverse);
}