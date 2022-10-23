#include <bits/stdc++.h>
using namespace std;

// maximize the profit
// if the prices are in decreasing order then profit = 0 no matter what

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minProfit = INT_MAX;
        
    for(int i=0;i<prices.size();i++){
        if(prices[i] < minProfit)
            minProfit = prices[i];
        else if(prices[i] - minProfit > maxProfit)
            maxProfit = prices[i] - minProfit; 
    } 
    return maxProfit;
} 
int main(){
    vector<int> given;
    int profit;
    int nSize;
    cout << "Enter number of elements :: ";
    cin >> nSize;
    
    cout << "Stock prices :: ";
    for(int i=0;i<nSize;i++){
        int tmp;
        cin >> tmp;
        given.push_back(tmp);

    }
    profit = maxProfit(given);
    cout << "maxProfit :: " << profit << endl;
    return 0;
}
