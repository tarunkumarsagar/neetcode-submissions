class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for(int i = 0; i < asteroids.size(); i++){
            bool destroy = false;

            while(!s.empty() && s.top() > 0 && asteroids[i] < 0){
                if(s.top() < abs(asteroids[i])) s.pop();
                else if(s.top() == abs(asteroids[i])){
                    s.pop();
                    destroy = true;
                    break;
                }else{
                    destroy = true;
                    break;
                }
            }
            if(!destroy) s.push(asteroids[i]);
        }

        vector<int> result(s.size());

        for(int i = s.size()-1; i>=0; i--){
            result[i] = s.top();
            s.pop();
        }
        return result;
    }
};