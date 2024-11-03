class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() == goal.length()) {
            string s2 = s + s;
            return (s2.find(goal) != string::npos) ? true : false;
        }
        return false;
    }
};
