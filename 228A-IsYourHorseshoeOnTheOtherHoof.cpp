#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int count=0;
    for(int i=0; i<4; ++i) {
    	int e;
    	cin>>e;
    	v.push_back(e);
    }
    sort(v.begin(), v.end());
    for(int i=1; i<v.size(); ++i) {
    	if(v[i]==v[i-1])
    		count++;
    }
    cout<<count<<endl;
    return 0;
}