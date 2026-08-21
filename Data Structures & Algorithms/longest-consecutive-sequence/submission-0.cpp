class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int maxc = 1;
                int curr = it;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    maxc++;
                }
                ans = max(ans,maxc);
            }
        }
        return ans;

    }
};
