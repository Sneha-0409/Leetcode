class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ch;
        for(int i=0 ;i<magazine.size(); i++){
            char c = magazine[i];
            ch[c]++;
        }
        for(int j =0; j<ransomNote.size(); j++){
            char s = ransomNote[j];
            if(ch[s] <= 0){
                return false;
            }
            ch[s]--;
        }
        return true;
    }
};