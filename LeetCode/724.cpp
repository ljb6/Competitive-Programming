class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) sum += nums[i];

        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == sum - nums[i]) return i;
            leftSum += nums[i];
            sum -= nums[i];
        }
        return -1;
    }
};