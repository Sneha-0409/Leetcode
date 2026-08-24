class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        for(int i=1;i<n;i++){
            stones[i] += stones[i-1];
        }
        int k = stones[n-1];
        for(int i=n-2;i>=1;i--){
            k = max(k, stones[i] - k);
        }
        return k;
    }
};