class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r(1,1);
        for(int i=0;i<rowIndex;i++){
            vector<int> newR;
            newR.push_back(1);
            for(int j =1;j<r.size();j++){
                newR.push_back(r[j-1] + r[j]);
            }
            newR.push_back(1);
            r = newR;
        }
        return r;
    }
};