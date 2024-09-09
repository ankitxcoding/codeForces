#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0; i<n; ++i)
    	cin>>s[i];
    for(auto c: s) {
    	transform(c.begin(), c.end(), c.begin(), ::toupper);
    	if(c=="YES")
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}