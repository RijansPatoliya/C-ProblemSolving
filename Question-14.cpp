//14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

//source link : https://www.youtube.com/watch?v=9vJXp0CLKKQ


//#include <stdio.h>
//
//int main() {
//    int arr[5] = {1, 2, 3, 4}; // Increase the size of the array to 5
//    int length = sizeof(arr) / sizeof(arr[0]);
//    int index = 0;
//    int value = 0;
//    int i;
//
//    // Shift elements to the right
//    for (i = length - 2; i >= index; i--) {
//        arr[i + 1] = arr[i];
//    }
//
//    // Insert the new element at the beginning
//    arr[index] = value;
//
//    // Print the updated array
//    for (i = 0; i < length; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


