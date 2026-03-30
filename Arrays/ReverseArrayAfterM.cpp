/*
Problem statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.
Note := We are following two pointer approach.
Time Complexity: O(N), space complexity: O(1)
Problem link :- https://www.naukri.com/code360/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3
*/

void reverseArray(vector<int> &arr , int m) {
    // Write your code here    
    int i = m + 1;
    int j = arr.size() -1;
    while(i < j){
        std::swap(arr[i], arr[j]);
        i++;
        j--;
    }   	
}