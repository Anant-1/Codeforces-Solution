#include<bits/stdc++.h>
#define anant ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    anant
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        string x = s1, y = s2;
        while(x.length() != y.length()) {
            if(x.length() < y.length()) {
                x += s1;
            }else{
                y += s2;
            }
        }
        if(x == y) {
            cout << x << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}