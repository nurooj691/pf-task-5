#include<stdio.h>
int main(){
	int age; 
	char citizenship;
	printf("enter your age");
	scanf("%d", &age);
	printf("are you a citizen?. (Y/N)");
	scanf(" %c", &citizenship);
	if(age>=18){
		if(citizenship=='Y' || citizenship== 'y')
		printf("you are eligible for vote");
		else if(citizenship=='N' || citizenship=='n')
		printf("you are not eligible for vote");
	}
	else
	printf("you are not eligible for vote");
}