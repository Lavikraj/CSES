#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;

    cin >> s;

    int maxi = -1;

    int count = 1;

    for(int idx = 1; idx < s.length() ;idx++){

        if(s[idx] == s[idx - 1]){

            count++;
            continue;
        }

        maxi = max(count, maxi);
        count = 1;
    }

    maxi = max(count, maxi);

    cout << maxi;

    return 0;
}