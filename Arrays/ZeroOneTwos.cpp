/*
Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

prob link :- https://www.naukri.com/code360/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTabValue=PROBLEM

Note :- Its also called as Dutch National Flag Algorithm. 
Time complexity :- O(N)
Space complexity :- O(1)
We are using three pointers to partition the array into three regions: 0s, 1s, and 2s.
*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int l =0;
   int m = 0;
   int h = n-1;
   while(m <= h){
      if(arr[m] == 0){
         std::swap(arr[l],arr[m]);
         m++; l++;
      }
      else if(arr[m] == 1)
         m++;
      else{ //m ==2
         std::swap(arr[m], arr[h]);
         h--;
      }   
   }
}