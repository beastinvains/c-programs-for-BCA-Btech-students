#include<stdio.h>
void main(){

    int nume,largestdigit=0,digit;
    printf("enter no");
    scanf("%d",&nume);
         while(nume!=0){
       digit=nume%10;
       if(largestdigit<digit){
        largestdigit=digit;
       }
         nume=nume/10;


    }    printf("%d",largestdigit);
   
}