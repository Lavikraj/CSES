#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[n];

    for(int idx = 0; idx < n; idx++){

        cin >> arr[idx];
    }

    long long moves = 0;

    for(int idx = 1; idx < n; idx++){

        if(arr[idx] < arr[idx - 1]){

            moves += arr[idx - 1] - arr[idx];
            arr[idx] = arr[idx - 1];
        }
    }

    cout << moves;

    return 0;
}