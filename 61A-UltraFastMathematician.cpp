#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin>>x>>y;
    string ans;
    for(int i=0; i<x.size(); ++i) {
    	if(x[i]!=y[i])
    		ans.push_back('1');
    	else
    		ans.push_back('0');
    }
    cout<<ans<<endl;
    return 0;
}