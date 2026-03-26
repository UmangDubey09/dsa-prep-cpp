/*
Problem statement
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.

An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".
Sample Input 1:
1
5
10 5 5 5 2
12
Sample Output 1:
5 5 2
Explanation for Sample Input 1:
5 5 2 is the only triplet that adds up to 12. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.

prob link :- https://www.naukri.com/code360/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTabValue=PROBLEM
Note :- This is a brute force approach with time complexity O(N^3) which will give TLE for large inputs. We will optimize it in the next approach.

*/

#include <bits/stdc++.h> 

bool exists(vector<vector<int>> &ans, vector<int> &vec){
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] == vec)	
			return true;	
	}
	return false;
}

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	int i =0, j =0, k=0;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			for(k = j+1; k<n; k++){
				if((arr[i]+arr[j]+arr[k]) == K){
					vector<int> vec;
					vec.push_back(arr[i]);
					vec.push_back(arr[j]);
					vec.push_back(arr[k]);
					sort(vec.begin(), vec.end());
					if(!exists(ans, vec))
						ans.push_back(vec);
				}
			}
		}
	}
	return ans;
}