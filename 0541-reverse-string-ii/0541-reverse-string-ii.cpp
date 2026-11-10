class Solution {
public:
    string reverseStr(string s, int k) {
        int steps = 2*k;
        for(int i=0; i<s.length(); i+=steps){
            int start = i;
            int end = min(i + k -1, (int)s.length() -1);
            while(start<end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};