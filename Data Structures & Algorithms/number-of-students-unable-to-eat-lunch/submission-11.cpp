class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& s) {
        int a=0;
        int b=0;
        for(int i:students){
            if(i==1)a++;
            else{b++;}
        }
        for(int i:s){
            if(i==1){
                if(a>0)a--;
                else{
                    return b;
                }
            }
            else{
                if(b>0)b--;
                else{
                    return a;
                }
            }
        }
        return a+b;
        
    }
};