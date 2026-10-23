class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int j=0;
        int count=0;
        int res=k;
        while(j<k){
            if(blocks[j]=='W'){
                count ++;
            }
            j++;
        }
        int i=0;
        while(j<blocks.size()){
            res=min(res,count);
            if(blocks[i]=='W'){
                count--;
            }
            if(blocks[j]=='W'){
                count++;
            }
            j++;
            i++;
        }
        res=min(res,count);
        return res;
        
        
    }
};