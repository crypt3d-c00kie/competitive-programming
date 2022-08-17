#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& arr){
    vector<int> solution;
    sort(arr.begin(),arr.end());
    // sorting array -> sort(arr,arr+n) // sorting vector -> sort(arr.begin(),arr.end())
    for(int i=1;i<arr.size();i++){
        if(arr[i] == arr[i-1])
            solution.push_back(arr[i]);                     
    }
    return solution;
}
int main(){
    vector<int> given;
    int nSize;
    cout << "Number of elements : ";
    cin >> nSize;
    cout << "Enter the elements : ";
    for(int i=0;i<nSize;i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }
    
    vector<int> solution1;
    solution1 = solve(given);
    for(int i=0;i<solution1.size();i++)
        cout << solution1[i] << " ";
    
    return 0;
}