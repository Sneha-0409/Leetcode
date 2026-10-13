class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int d = nums.size();
        k = k%d;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};