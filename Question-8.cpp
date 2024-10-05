//8. Find the Average of an Array.

#include<stdio.h>
int main(){
	
	int num[3],avrage,total=0,i;
	int length=sizeof(num)/sizeof(num[0]);
	printf("Enter Any value : ");
	for(i=0;i<=length;i++){
			scanf("%d",&num[i]);
	total=total+num[i];
}
	printf("%d",total);
	avrage=total/length;
    printf("%d",avrage);
}

