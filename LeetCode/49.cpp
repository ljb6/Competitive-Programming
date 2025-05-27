class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto word : strs) {
            string w = word;
            sort(w.begin(), w.end());
            mp[w].push_back(word);
        }

        vector<vector<string>> output;
        for (auto v : mp) {
            output.push_back(v.second);
        }

        return output;
    }
};