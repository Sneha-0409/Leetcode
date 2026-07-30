class Solution {
public:
    int minimumPushes(string word) {
        int noOfPushes = 0;
        for(int i=0;i<word.size(); i++){
            noOfPushes += (i/8) + 1;
        }
       return noOfPushes;
    }
};