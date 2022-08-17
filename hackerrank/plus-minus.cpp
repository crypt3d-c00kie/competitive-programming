#include<bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
    int nPos = 0, nNeg = 0, nZero = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > 0)
            nPos++;
        if(arr[i] == 0)
            nZero++;
        if(arr[i] < 0)
            nNeg++;
    }
    printf("%.6f\n", nPos/(double)arr.size());
    printf("%.6f\n", nNeg/(double)arr.size());
    printf("%.6f\n", nZero/(double)arr.size());
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
    plusMinus(given);
    return 0;
}