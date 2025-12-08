// majority-element-ii 
// https://leetcode.com/problems/majority-element-ii/description/

// hash-map solution (SLOW)  
// didn't understand the implamentation of Boyer-Moore Voting algo 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size() / 3;
        unordered_map<int, int> f;
        for(int i : nums){
            f[i]++;
        }
        for(auto i : f){
            if(i.second > n) ans.push_back(i.first);
        }
        return ans;

    }
};
