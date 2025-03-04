class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        //char top=st.top();
        for(char c:s){
            if(c=='[') st.push(c);
            else if(c=='{') st.push(c);
            else if(c=='(') st.push (c);
            
            else{
                
                if(st.empty()) return false;
                char top=st.top();
                if(c==']'&& top=='[') {
                    st.pop();
                }else if(c=='}'&& top=='{'){
                    st.pop();
                }else if(c==')' && top=='('){
                    st.pop();
                }else{
                    return false;
                }
                
                
            }
            
            
            
            
        }return st.empty();
    }      
    
};
