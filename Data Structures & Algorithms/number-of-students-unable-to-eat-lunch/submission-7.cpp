class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int a=0;
        int b=0;
        for(int i:students){
            if(i==1)a++;
            else{
                b++;
            }
        }
        for(int i: sandwiches){
            if(i==1){
                if(a==0){
                    break;
                }
                a--;
            }
            else{
                if(b==0){
                    break;
                }
                b--;

            }

        }
        return a+b;
        
    }
};