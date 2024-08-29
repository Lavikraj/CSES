#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long n;

    cin >> n;

    int ans = 0;

    while(n >= 5){

        n = n / 5;
        ans += n;
        //cout << ans << endl;
    }

    cout << ans;
    return 0;
}