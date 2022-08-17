#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> resultant; 
    int alice = 0;
    int bob = 0;
    for (int i=0;i<a.size();i++){
        if(a[i] > b[i])
            alice++;
        if(b[i] > a[i])
            bob++;
    }
    resultant.push_back(alice);
    resultant.push_back(bob);
    return resultant;
}

int main(){
    vector<int>given1,given2,res;
    int n;
    cout << "Size of each arrays : ";
    cin >> n;
    cout << "Enter the elements for array 1 : ";
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        given1.push_back(temp);
    }
    cout << "Enter the elements for array 2 : ";
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        given2.push_back(temp);
    }

    res = compareTriplets(given1,given2);
    cout << "Answer :: ";
    for(int i=0;i<res.size();i++)
        cout << res[i] << " ";
        
    return 0;
}