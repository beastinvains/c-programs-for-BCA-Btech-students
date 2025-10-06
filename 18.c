#include <stdio.h>
void main(){
    int a,b,c;
    
    for (a=1;a<=10;a++){
        for(b=1;b<=a;b++){
            if (a==5)goto end;
                
            printf("%d ",b);

        }
        printf("\n");
    }
    end:
    printf("end of program");
}