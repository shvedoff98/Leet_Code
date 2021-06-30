#include <stack>
class Solution {
public:
    bool isValid(string s) 
    {
        std::stack <char> st; 
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
                continue;
            }
            
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (st.empty()) return false;
                else if (st.top() == '(' && s[i] != ')')  return false;
                else if (st.top() == '{' && s[i] != '}')  return false;
                else if (st.top() == '[' && s[i] != ']')  return false;
            }
            st.pop();          
        }
        return st.empty();
    }        
};
