#include <bits/stdc++.h>
using namespace std;
//binary search is only effective with sorted array;

int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[mid] < target)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

int main(){
    vector<int> given;
    int nSize, nTarget;

    cout << "Size of the array :: ";
    cin >> nSize;
    cout << "Elements :: ";
    for(int i=0; i<nSize; i++){
        int temp;
        cin >> temp;
        given.push_back(temp);
    }
    cout << "Target :: " ;
    cin >> nTarget;
    cout << "Solution :: " << search(given,nTarget);
    
    return 0;
}