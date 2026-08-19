class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // vector<int> nse(heights.size());
        // vector<int> pse(heights.size());
        // stack<int> s1;
        // stack<int> s2;

        // for(int i = heights.size() - 1; i >= 0; i--){
        //     while(!s1.empty() && heights[i] <= heights[s1.top()]) s1.pop();
        //     nse[i] = s1.empty() ? heights.size() : s1.top();
        //     s1.push(i);
        // }
        // for(int i = 0; i < heights.size(); i++){
        //     while(!s2.empty() && heights[i] <= heights[s2.top()]) s2.pop();
        //     pse[i] = s2.empty() ? -1 : s2.top();
        //     s2.push(i);
        // }
        // int maxi = 0;
        // for(int i = 0; i < nse.size(); i++){
        //     int x = heights[i] *(nse[i] - pse[i] -1);
        //     maxi = max(maxi, x);
        // }
        // return maxi;

        stack<int> s;
        int maxi = 0;

        for(int i = 0; i < heights.size(); i++){
            int nse = i;
            while(!s.empty() && heights[i] <= heights[s.top()]){
                int x = s.top();
                s.pop();

                int pse = s.empty() ? -1 : s.top();
                maxi = max(maxi, (nse-pse-1)*heights[x]);
            }
            
            s.push(i);
        }
        while(!s.empty()){
            int x = s.top();
            s.pop();
            int nse = heights.size();
            int pse = s.empty() ? -1 : s.top();
            maxi = max(maxi, (nse-pse-1)*heights[x]);
        }
        return maxi;
        
    }
};
