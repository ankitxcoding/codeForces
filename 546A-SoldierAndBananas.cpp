#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin>>k>>n>>w;
    int toBorrow=0;
    while(w>0) {
    	toBorrow+=w*k;
    	w--;
    }
    if(toBorrow>n)
    	cout<<toBorrow-n<<endl;
    else
    	cout<<0<<endl;
    return 0;
}