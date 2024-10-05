//29.Write a program to find all pairs in an array whose sum is equal to a given number.
//Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].


#include<stdio.h>

int main(){
	int nums[4]={2,7,11,15};
	int len=sizeof(nums)/sizeof(nums[0]);
	int target=26;
	int i,j;
	
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			
			if(nums[i]+nums[j]==target){
				printf("%d %d",i,j);
			}
		}
	}
}
