class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> s;
        for(int i=0;i<nums.size() ; i++){
            int val = nums[i];
            if(s.find(val) != s.end() && i - s[val] <= k){
                return true;
            }
            s[val] = i;
        }
        return false;
    }
};