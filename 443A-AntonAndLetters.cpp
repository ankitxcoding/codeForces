#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    unordered_set<int> st;
    for(auto c: s) {
    	if(isalpha(c))
    		st.insert(c);
    }
    cout<<st.size()<<endl;
    return 0;
}