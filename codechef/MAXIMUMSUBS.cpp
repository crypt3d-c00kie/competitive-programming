#include<bits/stdc++.h>
using namespace std;

int main() {
	int nSize;
    	cin >> nSize;
	int nArr[nSize];
	
	for(int i=0;i<nSize;i++)
	{
	    cin >> nArr[i];
	    nArr[i] = nArr[i]*2;
	}
	for(int i=0;i<nSize;i++)
	    cout << nArr[i] << endl;
	return 0;
}
