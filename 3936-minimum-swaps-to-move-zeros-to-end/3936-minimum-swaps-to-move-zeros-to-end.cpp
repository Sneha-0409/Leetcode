class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
       return count(begin(nums), end(nums) - count(begin(nums),end(nums),0),0);
         
    }
};