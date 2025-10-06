#include <stdio.h>
void main() {
    int unit;
    float bill;
    printf("enter total units ");
    scanf("%d", &unit);
    if (unit<=50){
        bill = (unit *0.50);
    }else if (unit<=150){
        bill = (50 * 0.50) + ((unit - 50) * 0.75);
    }else if(unit<=250){
        bill = (50 * 0.50) + (100 * 0.75) + ((unit - 100) * 1.20);
    }else{
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }
bill = bill + bill*0.20;
printf("Your bill amount is: %.2f", bill);
}
