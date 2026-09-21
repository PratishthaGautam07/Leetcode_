class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxim=0;;
        while(i<j){
            int area =0;
          int  breadth = j-i;
            if(height[i]>height[j]){
                area = breadth * height[j];
                maxim = max(maxim,area);
                j--;
            }
            else{
                area = breadth * height[i];
                maxim = max(maxim,area);
                i++;
            }
        }
        return maxim;
        
    }
};