#include <bits/stdc++.h>
using namespace std;

// Take two arrays and merge them into a third array.
void f10() {
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    vector<int>c=a;
    c.insert(c.end(),b.begin(),b.end());
    for(int x:c) cout<<x<<" ";
    cout<<"\n";
}

int main(){ f10(); }
