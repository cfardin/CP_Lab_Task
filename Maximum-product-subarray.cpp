// maximum-product-subarray
// https://leetcode.com/problems/maximum-product-subarray/description/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int prefix = 1, suffix = 1;
        for(int i=0; i<n; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            prefix = prefix * nums[i];
            suffix = suffix * nums[n-1-i];
            mx = max(mx, max(prefix, suffix));
        }
        return mx;
    }
};
