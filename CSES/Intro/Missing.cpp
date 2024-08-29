#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[n - 1];

    int Nm1xor = 0;

    for(int idx = 0; idx < n - 1; idx++){

        cin >> arr[idx];
        Nm1xor ^= arr[idx];
    }

    int Nxor = 0;

    while(n != 0){

        Nxor = Nxor ^ n;
        n--;
    }

    cout << (Nxor ^ Nm1xor);
    return 0;
}