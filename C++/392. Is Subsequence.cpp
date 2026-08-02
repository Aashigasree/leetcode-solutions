class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int sLen = s.size();
        int tLen = t.size();

        while (i < sLen && j < tLen) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }

        return i == sLen;
    }
};