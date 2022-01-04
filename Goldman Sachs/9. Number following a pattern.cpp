class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        string ans;
        stack<int> st;
        int c = 1;
        for(auto it:S){
            st.push(c);
            c++;
            if(it == 'I'){
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(c);
        while(!st.empty()){
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
    }
};