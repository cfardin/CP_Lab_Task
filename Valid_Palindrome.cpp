//  Valid Palindrome Leetcode 
// https://leetcode.com/problems/valid-palindrome/description/

// resursion version : 
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string new_s = "";
//         for(char i : s){
//             if(isalnum(i)){ 
//                 new_s += tolower(i);
//             }
//         }
//        if(check(new_s, 0, new_s.size()-1)) return true;
//        else return false;
//     }

//     bool check(string s, int l, int r){
//         if(l >= r) return true;
//         if(s[l] != s[r]) return false;
//         return check(s, l+1, r-1);
//     }
// };



class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        for(char i : s){ 
            if(isalnum(i)){    /// isalnum() to check a char is a alphabet or not. 
                new_s += tolower(i);
            }
        }
        int l = 0, r = new_s.size() - 1;
        while(l < r){
            if(new_s[l] != new_s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
