class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;
        int counting = false;
        for(int i = n-1;i>=0 ;i--){
            if(s[i]!= ' '){
                counting = true;
                length++;
            }
            else if(counting){
                break;
            }
        }
        return length;
    }
};