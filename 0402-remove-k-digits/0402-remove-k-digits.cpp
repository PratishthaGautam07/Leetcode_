class Solution {
public:
    string removeKdigits(string num, int k) {
        stack <char> st;
        string result = "";
        for(int i = 0; i < num.size();i++){
            while(!st.empty()&& k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        
         // Remove leading zeroes
    int i = 0;
    while(i < result.size() && result[i] == '0') {
        i++;
    }

    result = result.substr(i);

    return result.empty() ? "0" : result;

        
    }
};