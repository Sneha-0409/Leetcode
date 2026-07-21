class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st (friends.begin(), friends.end());
        vector<int> ans;
        for(int num : order){
            if(st.count(num)){
                ans.push_back(num);
            }
        }
        return ans;
    }
};