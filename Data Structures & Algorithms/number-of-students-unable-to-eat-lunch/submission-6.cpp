class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
            int a=0;
            int b=0;
            int res=0;
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
                    if(a<=0){
                        break;
                    }
                    a--;
                }
                  if(i==0){
                    if(b<=0){
                        break;
                    }
                    b--;
                }
                res++;
            }
            return students.size()-res;
        
        
    }
};