class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int _max = 0;

        for (auto n : numSet) {
            if (numSet.find(n - 1) == numSet.end()) {
                int l = 1;
                while (numSet.find(n + l) != numSet.end()) {
                    l++;
                }
                _max = max(_max, l);
            }
        }

        return _max;
    }
};