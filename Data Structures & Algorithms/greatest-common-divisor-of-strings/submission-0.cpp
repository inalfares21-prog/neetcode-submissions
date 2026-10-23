class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       string res=str1+str2;
       string tmp=str2+str1;
       if(tmp!=res)return"";
       int a=str1.size();
       int b=str2.size();
       int s=gcd(a,b);
       string ans;
       for(int i=0;i<s;i++){
        ans.push_back(str1[i]);
       }
       return ans;
        
        
    }
};