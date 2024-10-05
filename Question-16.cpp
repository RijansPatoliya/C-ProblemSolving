//16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.[doubt] 	

#include<stdio.h>
int main(){
	 
	 int arr[5]={3,-2,4,1,5};
	 int length=sizeof(arr)/sizeof(arr[0]);
	 int i;
	 int positive=0;

	 for(i=0;i<length;i++){
	 	
	 	if(arr[i]>0){
	 	positive++;
		 
	 }
}
	 if(positive>0){
	 	printf("true");
	 }else{
	 	printf("false");
	 }
}

