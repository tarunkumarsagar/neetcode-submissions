class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<pair<int,int>> arr(nums.size());

        // for(int i = 0; i < nums.size(); i++){
        //     arr[i] = {nums[i], i};
        // }

        // sort(arr.begin(),arr.end());
        // int left = 0;
        // int right = nums.size()-1;
        // while(left<right){
        //     long long sum = (long long) arr[left].first + arr[right].first;
        //     if(sum==target){
        //         return {min(arr[left].second, arr[right].second), 
        //     max(arr[left].second, arr[right].second)};
        //     }else if(sum < target){
        //         left++;
        //     }else{
        //         right--;
        //     }
        // }
        // return {};


        unordered_map<int,int> map(nums.size());

        for(int i = 0; i < nums.size(); i++){
            int dif = target - nums[i];
            if(map.find(nums[i])!=map.end()){
                return {min(i,map[nums[i]]), max(i,map[nums[i]])};
            }
            map[dif] = i;
        }
        return {};
    }
};
