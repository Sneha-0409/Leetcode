class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> ans(nums.begin(), nums.end());
        vector<int> res;
        for(int i=1; i<=nums.size();i++){
             if(ans.find(i) == ans.end()){
                res.push_back(i);
             }
        }
        return res;
    }
};