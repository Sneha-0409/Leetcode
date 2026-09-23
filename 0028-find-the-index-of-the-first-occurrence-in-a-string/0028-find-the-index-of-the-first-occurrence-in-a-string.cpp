class Solution {
private: 
    vector<int> complps(string s){
        int n = s.size();
        vector<int> lps(n,0);
        int i = 1;
        int j = 0;
        while(i<n){
            if(s[i] == s[j]){
                lps[i] = j+1;
                i++;
                j++;
            }
            else{
                while(j>0 && s[i]!=s[j]){
                    j = lps[j-1];
                }
                if(s[i] == s[j]){
                    lps[i] = j+1;
                    j++;
                }
                i++;
            }
        }
        return lps;
    }
public:
    int strStr(string haystack, string needle) {
        string s = needle + '$' + haystack;
        vector<int> lps = complps(s);
        int n = haystack.size();
        int m = needle.size();
        vector<int> ans;
        for(int i = m+1;i<s.size();i++){
            if(lps[i] == m) return (i-2*m);
        }
        return -1;
    }
};