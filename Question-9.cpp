//9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

//#include<stdio.h>
//int main() {
//    int n, i, j, temp;
//
//    
//    printf("Enter the number of elements: ");
//    scanf("%d", &n);
//
//    
//    int nums[n];
//
//    
//    printf("Enter the elements of the array:\n");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &nums[i]);
//    }
//
//    
//    for (i = 0; i < n-1; i++) {
//        for (j = 0; j < n-i-1; j++) {
//            if (nums[j] > nums[j+1]) {
//               
//                temp = nums[j];
//                nums[j] = nums[j+1];
//                nums[j+1] = temp;
//            }
//        }
//    }
//
//printf("Sorted array in ascending order:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

