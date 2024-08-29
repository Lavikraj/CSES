#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long MOD = 1000000007;


int main(){
    
    int n;
    cin >> n;

    ll x = 2LL,ans = 1LL;

    while(n > 0){

        if(n % 2){

            ans = (ans * x) % MOD;
            n--;
            continue;
        }

        x = (x * x) % MOD;
        n = n / 2;
    }

    cout << ans;
    return 0;
}