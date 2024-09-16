class Solution {
public:
//Method 2- Improved Approach
//TC= O(n)
    int maxArea(vector<int>& height) {
        int area= 0;
        int left= 0;
        int right= height.size()-1;

        while(left<right){
            int length= min(height[left], height[right]);
            int breadth= right - left;

              // Calculate current area
            int currArea = length * breadth;

            // Update maximum area
            area = max(area, currArea);

            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return area;
    }
};