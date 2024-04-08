class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int freqStu[2];
        for(int ele : students)
            freqStu[ele]++;
        for(int i=0; i<n; i++)
            if(freqStu[sandwiches[i]]>0)
                freqStu[sandwiches[i]]--;
            else
                return n-i;
        return 0;
    }
};
// Title: Number of Students Unable to Eat Lunch
