class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0 ;
        int right = height.size()-1;
        int currentArea = 0;
        int maxArea = 0;
        while(left<right){
            int width = abs(left-right);
            int _height = min(height[left],height[right]);
            int currentArea = width*_height;
          
            maxArea = max(maxArea,currentArea);
            if(height[left]>height[right]){
                --right;
            }
            else{
                ++left;
            }
        }
        return maxArea;
    }
};
