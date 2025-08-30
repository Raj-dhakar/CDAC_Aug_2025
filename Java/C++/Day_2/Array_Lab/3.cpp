#include <bits/stdc++.h>
using namespace std;

// Input array and print the largest & smallest element.
void f3() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<*max_element(a.begin(),a.end())<<" "<<*min_element(a.begin(),a.end())<<"\n";
}

int main(){ f3(); }
