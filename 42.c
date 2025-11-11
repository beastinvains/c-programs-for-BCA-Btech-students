#include<stdio.h>
int print(int n , int n2);
void main(){
    int n , n2;
    printf("enter no ");
    scanf("%d%d",&n,&n2);
    print(n,n2);
}
int print (int n ,int n2){
 printf("addition is %d\n",n+n2);
}