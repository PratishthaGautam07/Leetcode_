class Solution {
public:
    string removeDuplicates(string s) {
        string result  = {};
        stack <char> st;
        for ( char ch : s){
            if(!st.empty()){
               char  b = st.top(); 
            
            if(ch==b){
                st.pop();
            }
            else{
                st.push(ch);
            }
            }
            else {
                st.push(ch);
            }

        }
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;

        
    }
};