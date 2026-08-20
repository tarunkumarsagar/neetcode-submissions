#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto &it : mp){
            int val = it.first;
            int freq = it.second;

            bucket[freq].push_back(val);
        }
        vector<int> ans;
        for(int i = nums.size(); i > 0; i--){
            if(bucket[i].size() == 0) continue;

            while(bucket[i].size()>0 && k>0){
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return ans;

    }
};