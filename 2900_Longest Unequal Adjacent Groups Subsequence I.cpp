class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        int last = -1;
        for(int i = 0; i < words.size(); i++){
            if(groups[i] != last){
                ans.push_back(words[i]);
                last = groups[i];
            }
        }
        return ans;
    }
};

/*
Input: words = ["e","a","b"], groups = [0,0,1]
Output: ["e","b"]
Explanation: A subsequence that can be selected is ["e","b"] because groups[0] != groups[2].
Another subsequence that can be selected is ["a","b"] because groups[1] != groups[2].
It can be demonstrated that the length of the longest subsequence of indices that satisfies the condition is 2.
*/
