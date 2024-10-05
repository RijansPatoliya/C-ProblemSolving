//19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

#include<stdio.h>
int main(){
	 int array[]={1,8,3,4,5};
	 int len=sizeof(array)/sizeof(array[0]);
	 int i,count=0;
	 for(i=0;i<len-1;i++){
	 	if(array[i]<array[i+1]){
	 		count++;
		 }else if(array[i+1]<array[i+2]){
	 		count++;
	 }else if(array[i+2]<array[i+3]){
	 		count++;
}else if(array[i+3]<array[i+4]){
	 		count++;
			 }
}
if(count=(len-1))	 {
	printf("ascending order");
}else{
	printf(" not ascending order");
}
}


