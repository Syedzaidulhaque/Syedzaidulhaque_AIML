#include <stdio.h>
int main() {
 int amount;   
printf("enter the amount");
scanf("%d",&amount);
printf("2000>>>>>>> %d \n", amount/2000);
amount=amount%2000;
printf("500>>>>>>> %d \n", amount/500);
amount=amount%500;
printf("200>>>>>>> %d \n", amount/200);
amount=amount%200;
printf("100>>>>>>> %d \n", amount/100);
amount=amount%100;
printf("50>>>>>>> %d \n", amount/50);
amount=amount%50;
printf("20>>>>>>> %d \n", amount/20);
amount=amount%20;
printf("10>>>>>>> %d \n", amount/10);
amount=amount%10;
printf("5>>>>>>> %d \n", amount/5);
amount=amount%5;
printf("2>>>>>>> %d \n", amount/2);
amount=amount%2;
printf("1>>>>>>> %d \n", amount/1);
amount=amount%1;
}