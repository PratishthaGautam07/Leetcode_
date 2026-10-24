class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sc = "";
        string tc = "";
        stack <char> st;
        for (char ch:s){
            if ( ch == '#'){
                if(!st.empty()){
                st.pop();
            }
            }
           else { st.push(ch);}
           
        }
         while(!st.empty()){
                sc+= st.top();
                st.pop();
            }
        for (char ch:t){
            if ( ch == '#'){
                if(!st.empty()){
                st.pop();
            }}
            else{
            st.push(ch);
            }
            
        }
        while(!st.empty()){
                tc+= st.top();
                st.pop();
            }
       
        if(sc!=tc){
            return false;
        }
        return true;

        
    }
};