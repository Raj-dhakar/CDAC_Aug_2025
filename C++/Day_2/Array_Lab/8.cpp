#include <bits/stdc++.h>
using namespace std;

// Find the second largest number without sorting.
void f8() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mx1=INT_MIN,mx2=INT_MIN;
    for(int x:a){
        if(x>mx1){mx2=mx1; mx1=x;}
        else if(x>mx2 && x<mx1) mx2=x;
    }
    if(mx2==INT_MIN) cout<<"No second largest\n";
    else cout<<mx2<<"\n";
}

int main(){ f8(); }
