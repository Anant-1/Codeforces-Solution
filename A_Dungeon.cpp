#include<bits/stdc++.h>
#define anant ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    // anant
    int t;
    cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll sum = a+b+c;
        ll times = sum/9;
        if(sum % 9 == 0 and a >= times and b >= times and c >= times) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }   
    return 0;
}