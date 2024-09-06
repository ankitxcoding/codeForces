#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    double ans, sum=0;
    for(int i=0; i<n; ++i) {
    	int e;
    	cin>>e;
    	v.push_back(e);
    }
    for(auto x: v)
    	sum+=x;
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}