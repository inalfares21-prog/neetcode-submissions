class Solution {
public:
string mult(string &num,int c){
    string res;
    int car=0;
    int i=num.size()-1;
    while(i>=0){
        res.push_back((car+(num[i]-'0')*c)%10+'0');
        car=(car+(num[i]-'0')*c)/10;
        i--;
    }
    if(car>0)res.push_back(car+'0');
    reverse(res.begin(),res.end());
    return res;
}
string add(string &num1,string& num2){
    string res;
    int c=0;
    int i=num1.size()-1;
    int j=num2.size()-1;
    while(i>=0||j>=0||c>0){
        int sum=c;
        if(i>=0)sum+=num1[i]-'0';
        if(j>=0)sum+=num2[j]-'0';
        res.push_back(sum%10+'0');
        c=sum/10;
        i--;
        j--;
    }
    reverse(res.begin(),res.end());
    return res;
}
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return "0";
        string res="0";
        for(int i=num2.size()-1;i>=0;i--){
            string curr=mult(num1,num2[i]-'0');
            res=add(curr,res);
            num1.push_back('0');
        }
        return res;
    
        
    }
};
