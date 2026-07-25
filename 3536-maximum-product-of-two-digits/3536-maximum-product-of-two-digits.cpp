class Solution {
public:
    int maxProduct(int n) {
        string ans = to_string(n);
        sort(ans.begin(), ans.end());
        int a = ans[ans.size() - 2] - '0';
        int b = ans[ans.size()-1] - '0';

        return a*b;
       
    }
};