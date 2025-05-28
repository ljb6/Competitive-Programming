class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> ref = {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };

        int sum = 0;
        for (int i = s.length() - 1; i >= 0; i--) {

            int value = ref[s[i]];

            for (int j = i - 1; j >= 0; j--) {
                if (ref[s[j]] >= ref[s[i]]) break;
                value -= ref[s[j]];
                i--;
            }
            sum += value;
        }

        return sum;
    }
}; 