class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int maxc = 0;
        int res = 0;
        int i = 0;

        for(int j = 0; j < s.size(); j++){
            freq[s[j]-'A']++;
            maxc = max(maxc, freq[s[j]-'A']);

            if(( j - i + 1)-maxc > k) {
               freq[s[i]-'A']--;
               i++;
            }
            res = max(res,( j - i + 1));                      
        }
        return res;
    }
};
