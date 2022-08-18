#include <bits/stdc++.h>
using namespace std;
// hackerrank problem solving question

vector<int> gradingStudents(vector<int> &grades) {
    vector<int> resultant;
    
    for(int i=0; i<grades.size(); i++){
        int negativeFactor = grades[i] % 5;

        if(grades[i] < 38)
            resultant.push_back(grades[i]);
        else if((grades[i] >=38) && (negativeFactor > 2))
            resultant.push_back(grades[i] + (5-negativeFactor));
        else
            resultant.push_back(grades[i]);   
    }
    
    return resultant;
}

int main(){
    int nSize;
    vector<int> given;

    cout << "Number of elements :: ";
    cin >> nSize;

    cout << "Current grades of students :: ";
    for(int i=0;i<nSize;i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }

    vector<int> solution1;
    solution1 = gradingStudents(given);

    for(int i=0;i<solution1.size();i++)
        cout << solution1[i] << endl;

    return 0;
}