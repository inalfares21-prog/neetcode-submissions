class Solution {
public:
bool sol(int prev,string &s,int i){
    if(i==s.size()-1){return true;}
    int curr=0;
    bool a=false;
    for(int j=i+1;j<s.size();j++){
        curr=curr*10+s[j]-'0';
        if(curr==prev-1||(prev==-1&&j!=s.size()-1)){
            a=a||sol(curr,s,j);
        }
    }
    return a;
}
    bool splitString(string s) {
        return sol(-1,s,-1);

    }
};
