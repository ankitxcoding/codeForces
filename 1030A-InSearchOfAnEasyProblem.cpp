#include <bits/stdc++.h>
using namespace std;

bool isHard(vector<int> v);

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; ++i) {
    	int e;
    	cin>>e;
    	v.push_back(e);
    }
    bool check=isHard(v);
    if(check)
    	cout<<"HARD"<<endl;
    else
    	cout<<"EASY"<<endl;
    return 0;
}

bool isHard(vector<int> v) {
	for(auto x: v) {
		if(x==1) {
			return true;
			break;
		}
	}
	return false;
}