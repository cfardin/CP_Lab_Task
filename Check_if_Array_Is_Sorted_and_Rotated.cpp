// Check if Array Is Sorted and Rotated 
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), c(0);

        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]) c++;
        }

        if(nums[n-1] > nums[0]) c++;

        return c <= 1;
    }
};
