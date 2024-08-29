#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long n = 10000;
    cin >> n;

    for (long long i = 1; i <= n ; i++){

        cout <<  (( ((i*i) + (3*i)) * ((i*i) - (3*i)) ) + 24 * i - 16 ) / 2 << endl;
    }
    return 0;
}