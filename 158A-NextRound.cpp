#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v;
    int count=0;
    for(int i=0; i<n; ++i) {
    	int e;
    	cin>>e;
    	v.push_back(e);
    }
    int ith=v[k-1];
    for(auto x: v) {
    	if(x>=ith && x!=0)
    		count++;
    	else
    		break;
    }
    cout<<count<<endl;
    return 0;
}