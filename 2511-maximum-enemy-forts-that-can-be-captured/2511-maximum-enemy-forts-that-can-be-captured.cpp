class Solution {
public:
    int captureForts(vector<int>& forts) {
       int i = 0;
       int j =0;
       int ans = 0;
       for(int i=0;i<forts.size() - 1;i++){
        if(forts[i] == 0){
            continue;
        }
        int capture = 0;
        for(int j = i+1; j<forts.size(); j++){
        if(forts[j] == 0){
            capture++;
        } else{
            if(forts[j] == -forts[i]){
                ans = max(ans, capture);
            }
            break;
        }
       }
    }
    return ans;
    }
};