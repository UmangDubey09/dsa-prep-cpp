
/*
here, we are using std::swap() , but in next, we will define and use our own swap()
Time Complexity

Each iteration:

Does one swap

Moves both pointers inward

Number of iterations ≈ n / 2

So time complexity is:

𝑂
(
𝑛
)
O(n)

Even though it runs n/2 times, in Big-O we ignore constants.

So:

Time = O(n)

Space Complexity

We are:
Not creating any new array
Not using recursion
Only using a few variables (i, j)
So extra space used = constant
Space = O(1) (in-place reversal)
Interview Style Answer
“Reversing the array using two pointers takes O(n) time and O(1) auxiliary space since the reversal is done in-place.”
*/

#include <iostream>
using namespace std;

void reverse_array(int arr[], int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {   // < is enough
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = 6;

    reverse_array(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}