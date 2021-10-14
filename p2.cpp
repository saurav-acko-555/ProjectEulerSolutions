#include <iostream>

using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum=2, l=1, r =2;
        cin>>n;
        for(int i=3 ; true; i++){
            int value = l+r;
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
