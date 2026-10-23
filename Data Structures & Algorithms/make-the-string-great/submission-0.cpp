class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char c:s){
            if(st.size()==0){
                st.push(c);
                continue;
            }
            else{
                if(c!=st.top()&&tolower(c)==tolower(st.top())){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        string res;
        while(st.size()>0){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;

    }
};
