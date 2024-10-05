//35. Print an inverted right-angled triangle pattern with n rows.

#include<stdio.h>
int main(){
	int i,j,num;
	printf("enter the value");
	scanf("%d",&num);
	
    for(i=0;i<num;i++){
    	for(j=4;j>=i;j--){
    		printf("*");
		}
		printf("\n");
	}
}

