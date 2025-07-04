class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (const int x : nums) {
            mp[x]++;
            if (mp[x] > 1) return true;
        }
        return false;
    }
};