class Solution {
public:
    int calPoints(vector<string>& operations) {
        int output = 0;
        stack <int> st;
        for (string  ch : operations){
            if ( ch == "C"){
                st.pop();
            }
             else if( ch == "D"){
                int a = 2* st.top();
                st.push(a);

            }
            else if ( ch == "+"){
                int b = st.top();
                st.pop();
                int c = st.top();
                st.pop();
                int d = b+c;
                st.push(c);
                st.push(b);
                st.push(d);

            }
            else {
                st.push(stoi(ch));
            }
            
        }
        while(!st.empty()){
            output += st.top();
            st.pop();
        }
        return output;
        
    }
};