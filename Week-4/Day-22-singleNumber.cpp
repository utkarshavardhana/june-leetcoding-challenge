class Solution {
public:
    int singleNumber(vector<int>& s) {
        vector<int> bits(32, 0);
        for(int i : s) {
            for(int j=0; j<32; j++) {
                if(i & 1<<j)    bits[j]++;
            }
        }
        int res = 0;
        for(int i=0; i<32; i++) {
            res += (bits[i] % 3 == 1) ? 1<<i : 0;
        }
        return res;
    }
};
