#include <stdio.h>
#include <math.h>
int main(){
 int count=0,enter,result=0,temp,temp2;
 printf("check for armstrong number\n");
 scanf("%d",&enter);
 temp=enter;
 while(temp!=0){
    temp = temp/10;
    count++;
 }
 temp=enter;
 while (temp!=0)
 {
 temp2=temp%10;

 temp=temp/10;
  result=result+pow(temp2,count);

}
 if(result==enter){
    printf("armstrong number");
 }
 else{
    printf("not armstrong number");
 }
 return 0;

}