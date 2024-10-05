//20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

#include <stdio.h>

int findMaxMinDifference(int arr[], int n) {
    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < n; i++) { 
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    
    int diff = maxElement - minElement;
    return diff; // Return the difference
}

int main() {
    int arr[] = {10, 20, 30, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int difference = findMaxMinDifference(arr, n);
    printf("Difference between max and min elements: %d\n", difference);
    return 0;
}

