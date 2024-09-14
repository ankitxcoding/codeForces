#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) {
    	cin>>v[i];
    	if(v[i]<=1399)
    		cout<<"Division 4"<<endl;
    	else if(v[i]<=1599 && v[i]>=1400)
    		cout<<"Division 3"<<endl;
    	else if(v[i]<=1899 && v[i]>=1600)
    		cout<<"Division 2"<<endl;
    	else
    		cout<<"Division 1"<<endl;
    }
    return 0;
}