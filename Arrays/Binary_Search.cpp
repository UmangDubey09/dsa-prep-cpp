/*
Binary Search (C++)
Introduction

Binary Search is an efficient searching algorithm used on sorted arrays.
Instead of checking elements one by one, it repeatedly divides the search space into half.

At each step:

Compare the middle element with the target.

If equal → return index.

If target is smaller → search left half.

If target is larger → search right half.

Repeat until the element is found or the range becomes invalid.

 Time Complexity

O(log n)

 Space Complexity

O(1) (iterative version)

*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // avoids overflow

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;  // target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = 6;
    int target = 8;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}