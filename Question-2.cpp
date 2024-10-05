//Question-2

#include<stdio.h>
int main(){
	float num;
	printf("Write a number : ");
	scanf("%f",&num);
	
	if(num>0){
		printf("Positive");
	}else if(num=0){
		printf("Zero");
	}else{
		printf("Negative");
	}
}
