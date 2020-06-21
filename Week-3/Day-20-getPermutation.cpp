class Solution {
public:
    string getPermutation(int n, int k) {
        string a;
        for(int i=1; i<=n; i++) {
            a += to_string(i);
        }
        k--;
        while(k--) {
            int flag = 0;
            for(int i=n-1; i>0; i--) {
                if(a[i] > a[i-1]) { 
                    int pos = -1;
                    for(int j=n-1; j>=i; j--) {
                        if(a[j] > a[i-1]) {
                            pos = j;
                            break;
                        }
                    }
                    swap(a[i-1], a[pos]);
                    reverse(a.begin()+i, a.end());
                    flag++;
                    break;
                }
            }
            if(!flag)   reverse(a.begin(), a.end());
        }
        return a;
    }
};
