class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string str : strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>> result;
        for (auto const& [key, value] : mp) {
            result.push_back(value);
        }
        return result;

        
    }
};
