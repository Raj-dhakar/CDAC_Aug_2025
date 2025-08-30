#include <bits/stdc++.h>
using namespace std;

// Take n elements from the user and display them.
void f1() {
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int x:a) cout<<x<<" ";
    cout<<"\n";
}

int main(){ f1(); }
