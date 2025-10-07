#include <stdio.h>
#include <math.h>
void main(){
    int enter,remender,count=0,temp,sum=0;
    printf("enter no");
    scanf("%d",&enter);
    temp=enter;
    do{
        temp=temp/10;
        count++;
    }while(temp!=0);
    temp=enter;
    do {
        remender=temp%10;
        sum=sum+round(pow(remender,count));
        temp/=10;

    }while(temp!=0);
    if (sum==enter){    
        printf("it is armstrong no");
    }else{
        printf("it is not armstrong no");
    }
}