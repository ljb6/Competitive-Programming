class Solution {
public:
    int search(vector<int>& nums, int target) {

        int p1 = 0;
        int p2 = nums.size();

        while (p1 < p2) {
            int mid = (p1 + p2) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                p2 = mid;
            } else {
                p1 = mid + 1;
            }
        }
        return -1;
    }
};