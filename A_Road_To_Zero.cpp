#include<bits/stdc++.h>
#define anant ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;

ll solve(ll &x, ll &y, ll &a, ll &b ) {
    ll ans = 0;
    if(a < b) {
        ll sum1 = a*x + a*y;
        ll sum2 = a*abs(x-y) + b*min(x,y);
        ans = min(sum1, sum2);
    }else{
        ans = b*min(x, y) + a*abs(x-y);    
    }
    return ans;
}

int main() {
    anant
    int t;
    cin >> t;
    while(t--) {
        ll x, y, a, b ;
        cin >> x >> y >> a >> b;
        cout << solve(x, y, a, b) << endl;
    }
    return 0;
}