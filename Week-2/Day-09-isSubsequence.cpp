class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, n = s.size();
        for(char c : t) {
            if(i >= n)  return true;
            if(c == s[i]) {
                i++;
            }
        }
        return (i >= n) ? true : false;
    }
};
