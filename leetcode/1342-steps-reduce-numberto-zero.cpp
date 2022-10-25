#include<bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
    int count=0;
    while(num!=0){
        if(num%2){
            num-=1;
            count++;
        }
        else{
            num/=2;
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout << "Given :: ";
    cin >> n;
    cout << "Number of steps to reduce a number to zero :: " << numberOfSteps(n);
    return 0;
}