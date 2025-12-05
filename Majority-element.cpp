// majority-element 
// https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> f;
        for(int i : nums){
            f[i]++;
        }
        int mx = INT_MIN;
        int ans = 0;
        for(auto i : f){
            if(i.second > f[ans]) ans = i.first;
        }
        return ans;
    }
};
