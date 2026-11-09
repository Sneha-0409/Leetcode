class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> ch;
        for(char c : chars){
            ch[c]++;
        }
        int sum = 0;
        for(string word : words){
            unordered_map<char, int> temp = ch;
            bool valid = true;
            for(char c : word){
            if(temp[c] <= 0){
                valid = false;
                break;
            }
            temp[c]--;
          }
          if(valid){
            sum += word.size();
          }
        }
        return sum;
    }
};