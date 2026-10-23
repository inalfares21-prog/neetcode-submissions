class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        int res=0;
        sort( students.begin() ,students.end());
        for(int i=0;i<seats.size();i++){
            res=res+abs(students[i]-seats[i]);

        }
        return res;
        
    }
};