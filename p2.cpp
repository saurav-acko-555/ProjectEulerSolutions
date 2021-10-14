#include <iostream.h>

using namespace std;

typedef unsigned long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, sum=2, l=1, r =2;
        cin>>n;
        for(ll i=3 ; true; i++){
            ll value = l+r;
            if(value > n){
            break;
        }
        if(value%2==0){
            sum +=value;
        }
            l=r;
            r=value;
        }
        

        cout<<sum<<endl;
    }
    return 0;
}
