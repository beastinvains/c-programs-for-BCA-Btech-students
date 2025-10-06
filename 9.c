#include <stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>=10 && b>=10){
        printf("1");
}
if (a<=10 || b<=10){
    printf("0");
}
}