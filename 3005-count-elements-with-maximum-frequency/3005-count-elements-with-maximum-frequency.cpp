class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxfreq = 0;
        int count = 0;
        for(int num : nums){
            freq[num]++;
            maxfreq = max(maxfreq, freq[num]);
        }
        for(auto it : freq){
            if(it.second == maxfreq){
                count += it.second;
            }
        }
        return count;
    }
};