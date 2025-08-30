#include <bits/stdc++.h>
using namespace std;

// Count how many times each element occurs.
void f9() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int>m;
    for(int x:a) m[x]++;
    for(auto &p:m) cout<<p.first<<" "<<p.second<<"\n";
}

int main(){ f9(); }
