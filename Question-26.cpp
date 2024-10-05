//26.Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"),

#include<stdio.h>
#include<string.h>

int main(){
char str1[50]="codinggita";
char str2[2]="f";
	
    if(str1[strlen(str1)-1]==str2[0]){
    	printf("true");
	}else{
		printf("false");
	}
}
