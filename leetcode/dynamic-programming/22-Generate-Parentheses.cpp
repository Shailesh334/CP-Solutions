class Solution {
public:
    bool isValid(string s){
        stack<char> st;

        for(char c : s){
            if(c == '(')st.push(c);
            else if(st.size() && c == ')' && st.top() == '(')st.pop();
            else st.push(c);
        }

        return st.size()==0;
    }
    void parentthesis(string s , int n , vector<string> &ans){

        if(s.size() == n){
            if(isValid(s))ans.push_back(s);
            return;
        }

        parentthesis(s + '(' , n , ans);
        parentthesis(s + ')' , n , ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
         parentthesis("" , 2*n , ans);
         return ans;
    }
};