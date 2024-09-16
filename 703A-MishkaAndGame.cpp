#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int, int>> pairs(n);
    int mishka=0, chris=0;
    for(int i=0; i<n; ++i)
    	cin>>pairs[i].first>>pairs[i].second;
    for(auto x: pairs) {
    	if(x.first>x.second)
    		mishka++;
    	else if(x.first<x.second)
    		chris++;
    }
    if(mishka==chris)
    	cout<<"Friendship is magic!^^"<<endl;
    else if(mishka>chris)
    	cout<<"Mishka"<<endl;
    else
    	cout<<"Chris"<<endl;
    return 0;
}