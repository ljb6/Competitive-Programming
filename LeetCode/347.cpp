class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;

        vector<pair<int, int>> vec;
        for (auto e : mp) {
            vec.push_back({e.first, e.second});
        }

        sort(vec.begin(), vec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second; 
             });
        
        vector<int> output(k);
        for (int i = 0; i < k; i++) output[i] = vec[i].first;

        return output;
    }
};