class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        int maxi = 0;
        for(int i =0 ; i<= heights.size(); i++){
            while(!st.empty()&& (i == heights.size()|| heights[st.top()]>=heights[i])){
                int height = heights[st.top()];
                st.pop();
                int width ;
                if(st.empty()){
                    width=i;
                }
                else {
                    width = i-st.top()-1;
                }
                area = height*width;
                maxi = max(maxi,area);

            }
            if(i<heights.size()){
            st.push(i);
            }
        }
        return maxi;
    }
};