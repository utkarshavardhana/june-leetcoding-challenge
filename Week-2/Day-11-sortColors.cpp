class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i : nums)   m[i]++;
        int index = 0;
        for(int &i : nums) {
            while(m[index] == 0)   index++;
            i = index;
            m[index]--;
        }
    }
};
