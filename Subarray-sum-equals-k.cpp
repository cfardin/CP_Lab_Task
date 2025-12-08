// subarray-sum-equals-k 
// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        unordered_map<int, int> f;
        for(int i=0; i<n; i++){
            if(prefix[i] == k) ans++;
            if(f.find(prefix[i] - k) != f.end()){
                ans += f[prefix[i] - k];
            }
            f[prefix[i]]++;
        }
        return ans; 
    }
};
