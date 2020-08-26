/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  valid parenthesis
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            switch (s[i]) {
                case '(': st.push(s[i]); break;
                case '{': st.push(s[i]); break;
                case '[': st.push(s[i]); break;
                case ')': if (st.empty() || st.top()!='(') return false; else st.pop(); break;
                case '}': if (st.empty() || st.top()!='{') return false; else st.pop(); break;
                case ']': if (st.empty() || st.top()!='[') return false; else st.pop(); break;
                default: ; // pass
            }
        }
        return st.empty() ;
        
    }
};
