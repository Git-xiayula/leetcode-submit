//
// Created by xiayula on 16/7/15.
//
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<vector<int>> res;
        if(len < 4 ) return res;
        sort(nums.begin(), nums.end());
        for(int i=0; i < len-3; ){
            for(int j=i+1; j < len-2; ){
                for(int m=j+1, n=len-1; m < n; ){
                    int tmp = nums[i] + nums[j] + nums[m] + nums[n];
                    if(tmp == target){
                        res.push_back({nums[i], nums[j], nums[m], nums[n]});
                        m++;
                        n--;
                        while (m < n && nums[m] == nums[m-1]) m++;
                        while (m < n && nums[n] == nums[n+1]) n--;
                    }else if(tmp < target){
                        m++;
                    }else{
                        n--;
                    }
                }
                j++;
                while (nums[j] == nums[j-1]) j++;
            }
            i++;
            while (nums[i] == nums[i-1]) i++;
        }
        return res;
    }
};
