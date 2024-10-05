//11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.

// //que-11
//  int main() {
//    int arr[] = {1, 2, 2, 3, 4, 4, 5,6,5,4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int newArr[n]; 
//    int i, j, isnew, newCount = 0;
//
//   
//    for(i = 0; i < n; i++) {
//        isnew = 1;  
//
//        
//        for(j = 0; j < newCount; j++) {
//            if(arr[i] == newArr[j]) {
//                isnew = 0;  
//                break;
//            }
//        }
//
//        if(isnew) {
//            newArr[newCount] = arr[i];
//            newCount++;
//        }
//    }
//
//   
//    printf("Updated array with unique elements: ");
//    for(i = 0; i < newCount; i++) {
//        printf("%d ", newArr[i]);
//    }
//
//    return 0;
//}



