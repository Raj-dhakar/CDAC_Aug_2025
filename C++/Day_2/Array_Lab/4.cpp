#include <bits/stdc++.h>
using namespace std;

// Input an array and search if a number exists.
void f4() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int x; cin>>x;
    bool ok=false;
    for(int v:a) if(v==x) ok=true;
    cout<<(ok?"Found\n":"Not Found\n");
}

int main(){ f4(); }
