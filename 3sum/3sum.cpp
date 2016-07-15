//
// Created by xiayula on 16/7/14.
//

class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        if(len < 3) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < len-2; ){
            for(int j = i+1, k = len-1; j<k; ){
                int temp = nums[i] + nums[j] +nums[k];
                if(temp > 0){
                    k--;
                }else if(temp < 0){
                    j++;
                }else{
                    res.push_back({nums[i], nums[j], nums[k]});
                    k--;j++;
                    while (k > j && nums[k] == nums[k+1]) k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                }
            }
            i++;
            while (i <len-2 && nums[i] == nums[i-1]) i++;
        }
        return res;
    }
};