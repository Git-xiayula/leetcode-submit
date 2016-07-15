//
// Created by xiayula on 16/7/14.
//
class Solution{
public:
    int maxArea(vector<int>& height){
        int len = height.size();
        if(len < 2) return 0;
        int area = 0, left = 0, right = len-1;
        while (left < right){
            int temp = (right-left) * min(height[left], height[right]);
            area = max(temp, area);
            if(height[left] < height[right]){
                left++;
            } else{
                right--;
            }
        }
        return area;
    }
};
