class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       stack<double> st;
       vector<pair<int,int>> cars;
       for(int i =0 ; i<position.size();i++){
        cars.push_back({position[i],speed[i]});
       }
       sort(cars.rbegin(),cars.rend());
        for(int i = 0 ; i< position.size();i++){
            int rem = target - cars[i].first;
            double reach = double(rem)/cars[i].second;
           if(st.empty()|| reach>st.top()){
                st.push(reach);
             
            }
          

        }
        return st.size();
        
    }
};