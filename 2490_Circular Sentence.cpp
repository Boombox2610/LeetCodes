class Solution {
public:
    bool isCircularSentence(string sentence) {
        int i = 0;
        while (sentence[i] != '\0') {
            i++;
        }

        if (sentence[0] == sentence[i - 1]) {
            // first condition satisfied
            i = 0;
            while (sentence[i] != '\0') {
                // checking second condition
                if (sentence[i] == ' ') {
                    if (sentence[i - 1] != sentence[i + 1]) {
                        return false;
                    }
                }
                i++;
            }
        } else {
            return false;
        }
        return true;
    }
};
