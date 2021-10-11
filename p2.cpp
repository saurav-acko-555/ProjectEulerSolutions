#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

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
