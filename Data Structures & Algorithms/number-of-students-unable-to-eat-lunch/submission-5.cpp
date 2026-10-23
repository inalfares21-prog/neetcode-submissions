class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int a=0;
        int b=0;
        for(int i: students){
            if(i==1){
                a++;
            }
            else{
                b++;
            }
        }
        for(int i: sandwiches){
            if(i==1){
                if(a>0){
                    a--;
                }
                else{
                    break;
                }
                
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