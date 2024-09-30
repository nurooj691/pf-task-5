#include<stdio.h>
int main()
{
	float a1, a2, a3;
	printf("enter angle 1");
	scanf("%f", &a1);
	printf("enter angle 2");
	scanf("%f", &a2);
	printf("enter angle 3");
	scanf("%f", &a3);
	if(a1>0&&a2>0&&a3>0){
		if(a1+a2+a3 ==180)
		printf("triangle is valid");
		else 
		printf("triangle is not valid");
	}
	else
	printf("triangle is not valid");
}