class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({score[i], i});
        }
        sort(arr.rbegin(), arr.rend());
        
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            int indx = arr[i].second;

            if(i == 0){
                ans[indx] = "Gold Medal";
            } else if(i == 1){
                ans[indx] = "Silver Medal";
            }else if(i == 2){
                ans[indx] = "Bronze Medal";
            }else {
                ans[indx] = to_string(i+1);
            }
        }
        return ans;

    }
};
