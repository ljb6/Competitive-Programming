class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxWater = 0, r = height.size() - 1;
        
        for (int l = 0; l < r; l++) {
            int calc = min(height[l], height[r]) * (r - l);
            maxWater = max(maxWater, calc);
            if (height[r] < height[l]) {
                l--;
                r--;
            }
        }

        return maxWater;
    }
};