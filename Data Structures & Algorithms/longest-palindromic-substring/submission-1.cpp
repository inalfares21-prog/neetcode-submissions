class Solution {
public:
    string longestPalindrome(string s) {
        int l;
        int r;
        int bl=0;
        int br=0;
        int curr;
        int mxdis=0;
        
        string result;
        for(int i=0;i<s.size();i++){

            curr=1;
            l=i;
            r=i;
            while(l>-1&&r<s.size()&&s[l]==s[r]){
                l--;
                r++;
                curr=curr+2;
            }
            l++;
            r--;
            curr-=2;
            
            if(curr>mxdis){
                mxdis=curr;
                bl=l;
                br=r;
            }
            curr=2;
            l=i-1;
            r=i;
            while(l>-1&&r<s.size()&&s[l]==s[r]){
                l--;
                r++;
                curr=curr+2;
            }
            curr=curr-2;
            l++;r--;
            if(curr>mxdis){
                mxdis=curr;
                bl=l;
                br=r;
            }
        } cout<<bl<<"   "<<br;
        result =s.substr(bl, br - bl + 1);
        return result;
        
    }
};
