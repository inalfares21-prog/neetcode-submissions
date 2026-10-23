class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& d) {
        int a=0;
        int b=0;
        for(int i:s){
            if(i==1)a++;
            else{
                b++;
            }
        }
        for(int i:d){
            if(i==1){
                if(a>0){
                    a--;
                }
                else{break;}
            }
            else{
                if(b>0){
                    b--;
                }
                else{
                    break;
                }
            }
        }
        return a+b;
        
    }
};