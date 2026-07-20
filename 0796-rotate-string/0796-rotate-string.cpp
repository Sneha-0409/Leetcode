class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string doubleofs = s + s;
        return doubleofs.find(goal) != string:: npos;
    }
};