class Solution {
public:
     string encode(vector<string> strs) {
         string encode = "";
         for(auto &it : strs){
            encode += to_string(it.size()) +"#"+ it;
         }
           return encode;
     }

     vector<string> decode(string s) {
          vector<string> decode;
          int i = 0;
        while(i < s.size()){
            
            int slashPos = s.find('#', i);
            int len = stoi(s.substr(i, slashPos - i));
            
            string str = s.substr(slashPos + 1, len);
            decode.push_back(str);
            i = slashPos + 1 + len;
            
          }
          return decode;
    }

    
};
