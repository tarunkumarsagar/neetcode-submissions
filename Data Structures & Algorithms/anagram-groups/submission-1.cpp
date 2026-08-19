class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> map;

       for(const string& str : strs){
        string s = str;
        sort(s.begin(), s.end());
        map[s].push_back(str);
       }

       vector<vector<string>> ans;
       for(auto const& [key,value] : map){
        ans.push_back(value);
       }
       return ans;
        
    }
};
