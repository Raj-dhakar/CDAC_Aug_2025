#include <bits/stdc++.h>
using namespace std;

// Input marks of n students, find total & average.
void f2() {
    int n; cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++){cin>>a[i]; sum+=a[i];}
    cout<<sum<<" "<<(double)sum/n<<"\n";
}

int main(){ f2(); }
