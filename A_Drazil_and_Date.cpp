#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, s;
    cin >> a >> b >> s;

    long long sum = abs(a)+abs(b);
    if(s >= sum and (s-sum) % 2 == 0) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}