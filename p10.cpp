#include<bits/stdc++.h>
using namespace std;
#define int long long


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


int32_t main(){
    vector<int> primes;
    primes.clear();
    get_all_primes(1000000, primes);
    int *a= new int[primes.size()];
    a[0]=primes[0];
    for(int i=1; i< primes.size() ; i++){
        a[i]= primes[i] + a[i-1];
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        auto it = lower_bound(primes.begin(), primes.end(), n);
        if(*it !=n){
            it--;
        }
        int index = it - primes.begin();
        cout<<a[index]<<endl;
    }
    return 0;
}

