class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int x = 0; 
        int y = 0;
        unordered_set<char> st;
        while(x < s.size() && y < s.size()){
            if(st.find(s[y])!= st.end()){
                st.erase(s[x]);
                x++;
            }else{
            st.insert(s[y]);
            y++;
            res = max(res,(int)st.size());
            }
        }

        

        // for(int i = 0; i < s.size(); i++){
        //    unordered_set<char> st;
        //     for(int j = i; j < s.size(); j++){
        //         if(st.find(s[j])!=st.end()){
        //             break;
        //         }
        //         st.insert(s[j]);
        //         res = max(res,(int)st.size());
        //     }
        // }
        return res;

    } 
};
