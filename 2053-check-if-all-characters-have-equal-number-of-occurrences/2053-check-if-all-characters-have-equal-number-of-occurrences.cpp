class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> chars(26,0);

        for(int i=0;i<s.size();i++){
            chars[s[i]-'a']++;
        }

        int freq = 0;
    for (int count : chars) {
        if (count > 0) {
            freq = count;
            break;
        }
    }
    for (int count : chars) {
        if (count > 0 && count != freq) {
            return false;
        }
    }

    return true;

    }
};