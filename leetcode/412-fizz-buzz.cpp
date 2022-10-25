#include<bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> solution;
    
    for(int i=1;i<=n;i++){
        if(i % 3 == 0 and i % 5 == 0)
            solution.push_back("FizzBuzz");
        else if(i % 3 == 0)
            solution.push_back("Fizz");
        else if(i % 5 == 0)
            solution.push_back("Buzz");
        else
            solution.push_back(to_string(i));
    }
    return solution;
}

int main(){
    int n;
    cout << "Enter range :: ";
    cin >> n;
    vector<string> result = fizzBuzz(n);
    for(auto x : result)
        cout << x << " ";

    return 0;
}