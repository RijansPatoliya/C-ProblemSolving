//10.  Given an array of integers,Count How many Numbers Are Even and How many are odd.

#include<stdio.h>
int main();
int array[]={1,2,3,4,5};
int n=sizeof(array)/sizeof(array[0]);
int i;
for(i=1;i<=n;i++){
	
	if(n%i==0){
		printf("Even : %d",i);
	}else{
		printf("Odd : %d",i);
	}
	return 0;
}




