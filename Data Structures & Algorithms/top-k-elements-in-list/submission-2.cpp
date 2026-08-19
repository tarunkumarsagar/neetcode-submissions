class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i : nums) {
            mp[i]++;
        }

        // Bucket: Index represents frequency
        // bucket[3] mein woh numbers honge jo 3 baar aaye hain
        vector<vector<int>> buckets(n + 1);
        for(auto const& [val, freq] : mp) {
            buckets[freq].push_back(val);
        }

        vector<int> result;
        // Piche se (highest frequency se) loop chalao
        for(int i = n; i >= 0 && result.size() < k; i--) {
            for(int num : buckets[i]) {
                result.push_back(num);
                if(result.size() == k) return result;
            }
        }
        return result;
    }
};