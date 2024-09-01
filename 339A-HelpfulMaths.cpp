#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> v;
    for(auto c: s) {
    	if(c!='+')
    		v.push_back(c);
    }
    string ans;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; ++i) {
    	ans.push_back(v[i]);
    	ans.push_back('+');
    }
    ans.push_back(v[v.size()-1]);
    cout<<ans<<endl;
    return 0;
}