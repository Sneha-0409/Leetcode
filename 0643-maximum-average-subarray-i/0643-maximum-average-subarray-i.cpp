class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int Avg = 0;
        for(int i =0;i<k;i++){
           Avg += nums[i]; 
        }
        int maxAvg = Avg;
        for(int i =k; i<nums.size();i++){
            Avg = Avg - nums[i-k] + nums[i];
            maxAvg = max(maxAvg, Avg);
        }
        return (double)maxAvg/k;
    }
};