class Solution {
public:
    int minTimeToType(string word) {
        int seconds = 0;
        int lastChar = 'a';
        for(int i = 0 ; i < word.size() ; i++) {
            int clockWise = abs(word[i] - lastChar);
            int antiClockWise = 26 - clockWise;
            seconds += min(clockWise , antiClockWise) + 1;
            lastChar = word[i];
        }
        return seconds;
    }
};