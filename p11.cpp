#include<bits/stdc++.h>
#define SIZE 20
using namespace std;

#define int long long
#define endl '\n'
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[ SIZE][SIZE];
    for (auto & l : a) {
        for (long long & i : l) {
            cin>>i;
        }
    }
    int max = 0;
    // for horizontal line
    for(auto & i : a){
        for(int j=0; j<= SIZE - 4; j++){
            int temp =1;
            for(int k = j ; k < j+4; k++ ){
                temp *= i[k];
            }

            if(temp > max){
                max = temp;
            }
        }

    }
    // for vertical line
    for(int i=0;  i <= SIZE-4 ;i++){
        for(int j=0; j< SIZE ; j++){
            int temp =1;
            for(int k = i ; k < i+4; k++ ){
                temp *= a[k][j];
            }

            if(temp > max){
                max = temp;
            }
        }

    }
    // for left diagonal
    for(int i=0;  i <= SIZE-4 ;i++){
        for(int j=(4-1); j< SIZE ; j++){
            int temp=1 ;
            for(int k=0; k< 4; k++){
                temp *= a[i+k][j-k];
            }

            if(temp > max){
                max = temp;
            }

        }

    }

    // for right diagonal
    for(int i=0;  i <= SIZE-4 ;i++){
        for(int j=0; j<=SIZE-4 ; j++){
            int temp =1 ;
            for(int k=0; k< 4; k++){
                temp *= a[i+k][j+k];
            }
            if(temp > max){
                max = temp;
            }

        }

    }
    cout<<max<<endl;
    return 0;
}

