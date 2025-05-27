class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int s = nums.size();
        vector<int> res(s), pref(s), suf(s);

        pref[0] = 1;
        for (int i = 1; i < s; i++) {
            pref[i] = pref[i - 1] * nums[i - 1];
        }

        suf[s-1] = 1;
        for (int i = s - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < s; i++) {
            res[i] = pref[i] * suf[i];
        }

        return res;
    }
};