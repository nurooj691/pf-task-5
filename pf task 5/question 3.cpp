#include<stdio.h>
int main(){
	float percentage;
	char grade;
	printf("enter your percentage");
	scanf("%f", &percentage);
	grade = (percentage>=90) ? printf("A"):
		(percentage>=80 && percentage<=89) ? printf("B"):
			(percentage>=70 && percentage<=79) ? printf("C"):
				(percentage>=60 && percentage<=69) ? printf("D"): printf("F");
					
	
}