#include <bits/stdc++.h>
using namespace std;

// Implement a simple bubble sort (ascending & descending).
void f7() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
    for(int v:a) cout<<v<<" ";
    cout<<"\n";
    for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
    cout<<"\n";
}

int main(){ f7(); }
