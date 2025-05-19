class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        
        for (int x : nums1)
            merged.push_back(x);

        for (int x : nums2)
            merged.push_back(x);

        sort(merged.begin(), merged.end());

        if (merged.size() % 2 == 0)
            return ((float)merged[merged.size()/2 - 1] +  (float)merged[merged.size()/2]) / 2;
        else
            return merged[merged.size()/2];
    }
};