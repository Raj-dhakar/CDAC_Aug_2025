#include <bits/stdc++.h>
using namespace std;

// Count how many even and odd numbers are in the array.
void f6() {
    int n; cin>>n;
    vector<int>a(n);
    int e=0,o=0;
    for(int i=0;i<n;i++){cin>>a[i]; if(a[i]%2==0) e++; else o++;}
    cout<<e<<" "<<o<<"\n";
}

int main(){ f6(); }
