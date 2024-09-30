#include<stdio.h>
	int countones(int num){
		int count = 0;
		int bitposition = 0;
		if(bitposition<5){
			if(num&1)		
			count++;
			bitposition++;
			num>>=1;	
		}
		if(bitposition<5){
			if(num&1)		
			count++;
			bitposition++;
			num>>=1;	
		}
		if(bitposition<5){
			if(num&1)		
			count++;
			bitposition++;
			num>>=1;	
		}
		if(bitposition<5){
			if(num&1)		
			count++;
			bitposition++;
			num>>=1;	
		}
		if(bitposition<5){
			if(num&1)		
			count++;
			bitposition++;
			num>>=1;	
		}
		return count;
	}
	int main(){
		int num;
		printf("enter a number");
		scanf("%d", &num);
		int count = countones(num);
		printf("the number of ones in first 5 bits are %d in %d", count, num);
		return 0;
	}

