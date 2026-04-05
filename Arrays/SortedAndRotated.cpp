/*
1752. Check if Array Is Sorted and Rotated
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].

Pronlem link :- leetcode.com/problems/check-if-array-is-sorted-and-rotated/
Time complexity of this approach is O(n) and space complexity is O(1) since we are using only a constant amount of extra space to store the count of decreases in the array.
Approach :- We will count the number of times the array decreases (i.e., nums[i] > nums[i+1]) as we iterate through the array. 
If the count is more than 1, then the array is not sorted and rotated. If the count is 0 or 1, then the array is sorted and rotated.


*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
    if(nums[nums.size()-1] > nums[0])
        count++;
    return count<=1;
    }
};