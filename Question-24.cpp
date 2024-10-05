//24. Write a program to remove whitespace from both ends of a string.Example: Input: " hello ", Output: "hello".

#include<stdio.h>
#include<string.h>
int main(){

char str[7]=" hello ";
int i,j;
for(i=0;i<strlen(str);i++){
	
	if(str[i]==' '){
		
		for(j=i;j<strlen(str);j++){
			
			str[j]=str[j+1];
		}
		i--;
	}
}

printf("%d",j);
}
