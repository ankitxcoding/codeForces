#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int lower=0, upper=0;
    for(auto c: s) {
    	if(islower(c))
    		lower++;
    	else
    		upper++;
    }
    if(lower>=upper) {
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	cout<<s<<endl;
    }
    else {
    	transform(s.begin(), s.end(), s.begin(), ::toupper);
    	cout<<s<<endl;
    }
    return 0;
}