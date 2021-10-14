#include<bits/stdc++.h>

using namespace std;
#define endl '\n';
#define int  long long
void get_all_primes(int upto_primes, vector<int> &primes){
    primes.clear();
    vector < bool > mark(upto_primes +2,true);

    for(int i=3 ; i<= upto_primes ; i+=2){
        if(mark[i]){
            for(int j=i*i ; j<=upto_primes ; j+=2*i){
                mark[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3 ; i<=upto_primes ; i+=2 ){
        if(mark[i]){
            primes.push_back(i);
        }
    };
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> prime;
    get_all_primes(1000000,prime);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<prime[n-1]<<endl;
    }
    return 0;
}
