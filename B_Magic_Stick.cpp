#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // if(y <= x) {
        //     cout << "YES" << endl;
        // }else if(x % 2 == 0){
        //     cout << "YES" << endl;
        // }
        if((x == 1 or x == 3) and y > x) cout << "NO\n";
        else if((x == 2) and y > x+1) cout << "NO" << endl;
        else cout << "YES" << endl;
 
    }
    return 0;
}