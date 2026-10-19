class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int x = 0;
        for(int i=0;i<seats.size();i++){
            int Noofmoves = abs(seats[i] - students[i]);
            x = x + Noofmoves;
        }
        return x;
    }
};