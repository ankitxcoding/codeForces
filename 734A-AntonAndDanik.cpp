#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;
    int a=0, d=0;
    for(auto c: s) {
    	if(c=='A')
    		a++;
    	else
    		d++;
    }
    if(a==d)
    	cout<<"Friendship"<<endl;
    else if(a>d)
    	cout<<"Anton"<<endl;
    else
    	cout<<"Danik"<<endl;
    return 0;
}