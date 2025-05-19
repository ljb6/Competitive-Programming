class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> ref;
        int _max = 0, left = 0, right = 0;
        while (right < s.length()) {
            ref[s[right]]++;
            while (ref[s[right]] > 1) {
                ref[s[left]]--;
                left++;
            }
            _max = max(_max, (right - left + 1));
            right++;
        }
        return _max;
    }
};