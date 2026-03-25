/*
Problem statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.


5 5
1 2 3 4 5
Sample Output 1:
1 4
2 3
Explaination For Sample Output 1:
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
Sample Input 2:
5 0
2 -3 3 3 -2
Sample Output 2:
-3 3
-3 3
-2 2

Problem Link :- https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

Note : below solution is brute force and have a time complexity of O(n²).
We can optimize it using hashing or two pointer approach to achieve a time complexity of O(nlogn).
Try again after learning those concepts.
*/

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> vec;
   for(int i = 0; i < arr.size(); i++){
       for(int j = i+1; j < arr.size(); j++){
           if((arr[i] + arr[j]) == s){
               vector<int> temp;
               temp.push_back(min(arr[i], arr[j]));
               temp.push_back(max(arr[i], arr[j]));
               vec.push_back(temp);
           }
       }
   }
   sort(vec.begin(), vec.end());
   return vec;
}