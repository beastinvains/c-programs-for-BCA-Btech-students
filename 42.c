#include<stdio.h>
int print(int n);
void main(){
    int n;
    printf("enter no ");
    scanf("%d",&n);
    print(n);
}
int print (int n){
    int cur=1;
    for (int i=1;i<=n;i++){
        printf("hello world!\n");
    }
}