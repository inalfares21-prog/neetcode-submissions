class Solution {
public:
    int candy(vector<int>& ratings) {
        int res=0;
        int count=1;
        int prev=1;
        if(ratings.size()==1)return 1;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]==ratings[i-1]){
                res+=(count-1)*(count)/2+max(prev,count);
                while(i<ratings.size()&&ratings[i]==ratings[i-1]){
                res++;
                prev=0;
                count=1;
                i++;
                }
                if(i==ratings.size())return res;
                res--;
                
            }
            if(ratings[i]<ratings[i-1]){
                cout<<"aaaaa"<<endl;
                if(i>1&&ratings[i-2]==ratings[i-1]);
               
                count++;
                if(i==ratings.size()-1){
                    res+=(count-1)*(count)/2+max(prev,count);
                }
            }
            else{
                res+=(count-1)*(count)/2+max(prev,count);
                if(i>1&&ratings[i-2]==ratings[i-1]);

                count=1;
                int k=2;
                while(i<ratings.size()&&ratings[i]>ratings[i-1]){
                    res+=k;
                    k++;
                    i++;
                }
                prev=k-1;
                i--;
                res-=prev;
                if(i>=ratings.size()-1)res+=prev;
            }
            cout<<count<<endl;
        }
        return res;
        
    }
};