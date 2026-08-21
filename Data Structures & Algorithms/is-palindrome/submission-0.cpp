class Solution {
public:
    bool isPalindrome(string s) {
        string r ="";
        for(char ch : s){
            if(isalnum(ch)) r+=tolower(ch);
        }
        int left = 0;
        int right = r.size()-1;
        while(left<=right){
            if(r[left]!=r[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
