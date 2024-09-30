#include<stdio.h>
int main(){
	float discount;
	char membership;
	float amount;
	char eligibilty;
	printf("enter your total amount");
	scanf("%f", &amount);
	printf("do you have a membership?. (Y/N)");
	scanf(" %c", &membership);
	eligibilty = (amount > 100 && (membership=='Y' || membership == 'y')) ? printf("eligible") : printf("not eligible");
	
}