/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Problem link :-https://leetcode.com/problems/move-zeroes/description/

Time → O(n)
Space → O(1)
We are using two pointers to keep track of the position of the last non-zero element and the current element. We iterate through the array and whenever we encounter a non-zero element, we swap it with the last non-zero element and update the position of the last non-zero element. This way, all non-zero elements are moved to the front of the array while maintaining their relative order, and all zeros are moved to the end of the array.   
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j]!= 0){
                std::swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

