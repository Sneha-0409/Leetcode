class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int> ans (3,0);
        for (int x : stones) {
            ans[x % 3]++;
        }
        if (ans[0] % 2 == 0) {
            return ans[1] > 0 && ans[2] > 0;
        }
        return abs(ans[1] - ans[2]) > 2;
    }
};