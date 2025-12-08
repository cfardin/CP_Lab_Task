// pascals-triangle
// https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> pre;
        for(int i=0; i<numRows; i++){
            vector<int> current(i+1, 1);
            for(int j=1; j<i; j++){
                current[j] = pre[j-1] + pre[j];
            }
            ans.push_back(current);
            pre = current;
        }
        return ans;
    }
};
