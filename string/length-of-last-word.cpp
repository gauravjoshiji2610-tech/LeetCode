class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int g = 0;

        // skip trailing spaces
        while (i >= 0 && s[i] == ' ')
            i--;

        // count last word length
        while (i >= 0 && s[i] != ' ') {
            g++;
            i--;
        }

        return g;
    }
};
