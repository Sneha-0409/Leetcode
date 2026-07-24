class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minDif = INT_MAX;
        vector<vector<int>> ans;
        for(int i=1;i<arr.size();i++){
            int dif = arr[i] - arr[i-1];
            if(dif<minDif){
                minDif = dif;
                ans = {};
                ans.push_back({arr[i-1], arr[i]});
            } else if(dif == minDif){
                ans.push_back({arr[i-1], arr[i]});
            }
        }
        return ans;
    }
};