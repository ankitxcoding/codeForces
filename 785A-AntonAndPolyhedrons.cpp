#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0; i<n; ++i)
    	cin>>s[i];
    unordered_map<string, int> mp={
    	{"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    int faces=0;
    for(auto x: s)
    	faces+=mp[x];
    cout<<faces<<endl;
    return 0;
}