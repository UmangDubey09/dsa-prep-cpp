
/* Problem statement
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.
Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation of sample input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
Link Codehelp: https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM
*/
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
    for(int j = 1; j < arr.size(); j++){
        ans = ans ^ j;
    }
	return ans;
}