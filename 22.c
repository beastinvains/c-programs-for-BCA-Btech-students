#include <stdio.h>
int main(){
int b;
int MRA;
int DA;
int GS;
printf("enter Basic Salery");
scanf("%d",&b);
if (b<=10000){
MRA=20;
DA=80;
GS=b+(b*MRA/100)+(b*DA/100);
printf("Gross Salery is %d",GS);
}
else if (b<=20000){ 
MRA=25;
DA=90;
GS=b+(b*MRA/100)+(b*DA/100);
printf("Gross Salery is %d",GS);
}
else if (b>20000){  
MRA=30;
DA=95;
GS=b+(b*MRA/100)+(b*DA/100);
printf("Gross Salery is %d",GS);
}
}