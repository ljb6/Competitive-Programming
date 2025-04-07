class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0, r = 0, _max = 1;
        map<char, int> counter;

        counter[s[0]]++;

        while (r < s.length() - 1) {
            r++;
            counter[s[r]]++;
            while (counter[s[r]] == 3) {
                counter[s[l]]--;
                l++;
            }
            _max = max(_max, r-l+1);
        }

        return _max;
    }
};