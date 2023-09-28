#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    ll x = n/a, y = m/a;
    if(n % a != 0) {
        x++;
    }
    if(m % a != 0) {
        y++;
    }
    cout << x*y<< endl;
    return 0;
}




