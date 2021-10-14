#include<bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        string x;
        cin>>n>>k;
        cin>>x;
        int max = 0;
        int temp = 1;

        for(int i=0 ; i <= (int)x.size()-k ;i++){
            temp = 1;
            for (int j = i; j < i+k ; ++j) {
                 temp = temp * (x[j]-'0');
            }

            if(temp > max){
                max = temp;
            }
            
        }
        cout<<max<<endl;
    }
    return 0;

}
