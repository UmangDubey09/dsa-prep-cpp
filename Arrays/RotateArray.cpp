/*
189. Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Problem link :- https://leetcode.com/problems/rotate-array/description/
 Note :- here in this approach, we are using an extra array to store the rotated elements and then copying them back to the original array. 
 The time complexity of this approach is O(n) and the space complexity is O(n) due to the extra array used for rotation.
 Since we are using an extra array to store the rotated elements, the space complexity of this approach is O(n). and its not an optimal solution.
  An optimal solution would be to rotate the array in place with O(1) extra space which we will discuss in the next approach.
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> vec(nums.size());
        for(int i = 0; i < nums.size(); i++){
            vec[((i+k)%(nums.size()))] = nums[i];
        }
        nums = vec;
    }
};