#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<char> c(n);
    string s="codeforces";
    for(int i=0; i<n; ++i) {
    	cin>>c[i];
    	if(s.find(c[i]) != string::npos)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}