class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int n = numbers.size() - 1; n > 0; n--) {
            for (int i = 0; i < numbers.size(); i++) {
                if (numbers[i] + numbers[n] > target) break;
                if (numbers[i] + numbers[n] == target) return {i+1, n+1};
            }
        }
        return {};
    }
};