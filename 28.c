 #include <stdio.h>
 void main(){
    int a,r=1;
    printf("enter no you want to find factorial of ");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        r*=i;
        printf(" %d *",r);
 }
}