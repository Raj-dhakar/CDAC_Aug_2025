#include <bits/stdc++.h>
using namespace std;

// Reverse an array and display the result.
void f5() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    reverse(a.begin(),a.end());
    for(int v:a) cout<<v<<" ";
    cout<<"\n";
}

int main(){ f5(); }
