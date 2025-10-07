#include <stdio.h>
int swapval(int n1, int n2);
int swapvalue(int *n1, int *n2);
void main (){
    int n1, n2;
    printf("enter no ");
    scanf("%d %d",&n1,&n2);
    swapval(n1,n2);
    printf("value befor real swap %d %d\n",n1,n2);
    swapvalue(&n1,&n2);
    printf("after real swap %d %d\n",n1,n2);

}
int swapval(int n1, int n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("after swap by value %d %d\n",n1,n2);
}
int swapvalue(int *n1, int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("after swap by reference %d %d\n",*n1,*n2);
}