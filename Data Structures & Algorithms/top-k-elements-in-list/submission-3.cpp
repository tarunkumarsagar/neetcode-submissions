#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Frequency map
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }

        // Step 2: Map ke pairs ko vector mein daalein
        vector<pair<int, int>> freqVector(mp.begin(), mp.end());

        // Step 3: Frequency (pair.second) ke basis par ascending order mein sort karein
        sort(freqVector.begin(), freqVector.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        // Step 4: Last ke k elements pick karein (highest frequency)
        vector<int> ans;
        int n = freqVector.size();
        for (int i = n - 1; i >= n - k; i--) {
            ans.push_back(freqVector[i].first);
        }

        return ans;
    }
};