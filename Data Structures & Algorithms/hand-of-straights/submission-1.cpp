class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        queue<int>tmp;
        queue<pair<int,int>>q;
        sort(hand.begin(),hand.end());
        int count=1;
        for(int i=1;i<hand.size();i++){
            if(hand[i]!=hand[i-1]){
                q.push({hand[i-1],count});
                count=1;
            }
            else{
                count++;
            }
        }
        q.push({hand[hand.size()-1],count});
        if(q.size()<groupSize)return false;
        int remove=0;
        int prev=0;
        for(int i=0;i<groupSize;i++){
            if(q.front().first!=prev+1&&remove!=0)return false;
            prev=q.front().first;
            if(q.front().second<remove)return false;
            int c=q.front().second-remove;
            remove+=c;
            tmp.push(c);
            q.pop();        
        }
        remove=remove-tmp.front();
        tmp.pop();
        while(q.size()>0){
            if(q.front().first!=prev+1&&remove!=0)return false;
            prev=q.front().first;
            if(q.front().second<remove)return false;
            int c=q.front().second-remove;
            remove+=c;
            tmp.push(c);
            q.pop(); 
            remove=remove-tmp.front();
            tmp.pop();       
        }
        return remove==0;
        
    }
};
