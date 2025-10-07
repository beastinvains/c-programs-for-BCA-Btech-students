#include <stdio.h>
void main(){
    int num ,sum=0,i=1;
    scanf("%d",&num);
    do{sum=sum+i;
    i++;
    }while(i<=num);
    printf("%d",sum);
}