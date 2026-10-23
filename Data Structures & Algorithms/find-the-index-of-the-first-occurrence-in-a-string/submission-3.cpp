class Solution {
public:
bool sol(string h, string n,int i){
    int k=0;
    for(int j=i;j<h.size();j++){
        cout<<k<<endl;
        if(k>=n.size()){return true;}
        if(n[k]!=h[j]){cout<<k;return false;}
        k++;
    }
    cout<<k;
    return k==n.size();
}
    int strStr(string h, string n) {
        for(int i=0;i<h.size();i++){
            if(h[i]==n[0]){
                if(sol(h,n,i))return i;
            }
        }
        return -1;
    
        
    }
};