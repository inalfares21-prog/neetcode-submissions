class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int>s;
        vector<int>res;
        
        for(int i:as){
            bool a=true;
            if(i<0){
                while(s.size()>0){
                    if(abs(i)<s.top())break;
                    if(abs(i)>s.top()){
                        s.pop();
                        continue;
                    }
                    if(abs(i)==s.top()){
                        a=false;
                        s.pop();
                        break;
                    }   
                }
                if(s.size()==0&&a)res.push_back(i);
            }
            else{
                s.push(i);
            }
        }
        if(s.size()>0){
        vector<int>tmp(s.size());
        for(int i=tmp.size()-1;i>-1;i--){
            tmp[i]=s.top();
            s.pop();
        }
        for(int i:tmp){res.push_back(i);}}
        
        return res;
        
    }
};