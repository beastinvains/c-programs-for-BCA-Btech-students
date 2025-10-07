#include <stdio.h>
void main (){
    int n, cur=1;
    printf("enter no ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",cur);
            cur++;
        }
        printf("\n");
    }
}