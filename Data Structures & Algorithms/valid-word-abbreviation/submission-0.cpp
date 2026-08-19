class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
       int i=0;
       int j=0;
       while(i<word.length() && j<abbr.length()){
        if(isdigit(abbr[j])){
            if(abbr[j]=='0'){
                return false;
            }
            int curr=0;
            while(j<abbr.length() && isdigit(abbr[j])){
                curr = curr*10+(abbr[j]-'0');
                j++;
            }
            i=i+curr;
        }else{
            if(word[i]!=abbr[j]){
                return false;
            }
            i++;
            j++;
        }
       } 
        return i==word.length() && j==abbr.length();
        
    }
};