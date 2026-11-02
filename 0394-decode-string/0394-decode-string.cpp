class Solution {
public:
    string decodeString(string s) {
        
        

    stack<char> st;

    for(int i = 0; i < s.size(); i++) {

        if(s[i] != ']') {
            st.push(s[i]);
        }

        else {
            string temp = "";

            // Pop until '['
            while(!st.empty() && st.top() != '[') {
                temp += st.top();
                st.pop();
            }

            st.pop(); // remove '['

            reverse(temp.begin(), temp.end());

            // Get number
            string num = "";

            while(!st.empty() && isdigit(st.top())) {
                num += st.top();
                st.pop();
            }

            reverse(num.begin(), num.end());

            int k = stoi(num);

            // Repeat string
            string repeated = "";

            for(int j = 0; j < k; j++) {
                repeated += temp;
            }

            // Push decoded string back
            for(char ch : repeated) {
                st.push(ch);
            }
        }
    }

    // Build final answer
    string ans = "";

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;

    }
};