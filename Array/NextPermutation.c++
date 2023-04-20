#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size(), i, j;
 
    // Find for the pivot element.
    // A pivot is the first element from
    // end of sequenc ewhich doesn't follow
    // property of non-increasing suffix
    for (i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            break;
        }
    }
 
    // Check if pivot is not found
    if (i < 0) {
        reverse(nums.begin(), nums.end());
    }
 
    // if pivot is found
    else {
 
        // Find for the successor of pivot in suffix
        for (j = n - 1; j > i; j--) {
            if (nums[j] > nums[i]) {
                break;
            }
        }
 
        // Swap the pivot and successor
        swap(nums[i], nums[j]);
 
        // Minimise the suffix part
        reverse(nums.begin() + i + 1, nums.end());
    }}
};
