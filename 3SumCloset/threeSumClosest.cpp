//
// Created by xiayula on 16/7/14.
//

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int gap = INT_MAX, minSum;
        for(int i=0; i<len; i++){
            for(int j=i+1, k = len-1; j < k; ){
                int tmp = nums[i] + nums[j] + nums[k];
                if(tmp == target) return tmp;
                else if(tmp < target){
                    j++;
                    if(abs(tmp - target) < gap){
                        minSum = tmp;
                        gap = abs(tmp - target);
                    }
                }else{
                    k--;
                    if(abs(tmp - target) < gap){
                        minSum = tmp;
                        gap = abs(tmp - target);
                    }
                }
            }
        }
        return minSum;
    }
};