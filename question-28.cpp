//28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;


#include<stdio.h>

int check(int a,int b){
	
	if(a>b){
		printf("%d",a);
	}else{
		printf("%d",b);
	}
}

int main(){
	
	int num1=90;
	int num2=20;

 check(num1,num2);
	return 0;
}

