#include<bits/stdc++.h>
using namespace std;
//volume of histogram or rain water trapping

int  waterCollection(vector<int>& arr){
    int n = arr.size();
    int res = 0;
    vector<int> lmax(n);
    vector<int> rmax(n);
    if (arr.empty())
        return 0;
    // 3 loops one to calc lmax, rmax and finally res
    lmax[0] = arr[0];
    for(int i=1;i<n;i++) // left subarray ++
        lmax[i] = max(arr[i],lmax[i-1]);

    rmax[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--) //right subarray --
        rmax[i] = max(arr[i],rmax[i+1]);
    // result
    for(int i=1;i<n-1;i++)
        res += min(lmax[i],rmax[i]) - arr[i];

    return res;
}
int main(){
    int nSize;
    vector<int> given;

    cout << "Number of blocks in rain water trap :: ";
    cin >> nSize;

    cout << "Height of blocks :: ";
    for(int i=0;i<nSize;i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }
    
   cout << "The solution :: " << waterCollection(given) << endl;
    return 0;
}