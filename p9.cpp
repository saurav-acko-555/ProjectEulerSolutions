#include<bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while(t--){
        int n, max =-1;
        cin>>n;
        for (int a =1; a < n/2; ++a) {
            int num = n*(n-2*a) , den = 2*(n-a);
            if(num%den ==0){
                int b = num /den;
                int c = n-a-b;
                if(b > a && c > b ){
                    if(a*b*c > max){
                        max = a*b*c;
                    }
                }
            }
        }
        cout<<max<<endl;
    }

}
