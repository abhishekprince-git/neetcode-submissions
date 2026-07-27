class Solution {
public:

int operate(int a , int b , string c){
    if(c=="+"){
        return a+b;
    }
    if(c=="-"){
        return a-b;
    }
    if(c=="*"){
        return (long)a*(long)b;
    }
    if(c=="/"){
        return a/b;
    }
    return -1;
}
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;
        for(string &s : tokens){
            if(s == "+"||s == "-"||s == "*"||s == "/"){
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int ans = operate(a,b,s);
                st.push(ans);
            }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
