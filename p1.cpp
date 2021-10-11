#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
   unsigned long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        unsigned long long int t=a[i]-1;
        unsigned long long int x3 = t / 3, x5 = t / 5, x15 = t / 15;
        t = x3 * (x3 + 1) * 3 / 2 + x5 * (x5 + 1) * 5 / 2-x15*(x15+1)*15/2;
        cout<<t<<endl;
    }
}

