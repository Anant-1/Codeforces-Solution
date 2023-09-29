#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v(4);
        int odd = 0, even = 0;
        for(int i = 0; i < 4; i++) {
            cin >> v[i];
            if(i != 3 and  v[i] % 2 == 0) even++;
            else if(i != 3) odd++;
        }
        // cout << odd << " " << even << endl;
        if(v[0] == 0 && v[1] == 0 && v[2] == 0) {
            cout << "Yes\n";
        }else if((v[0] == 0 or v[1] == 0 or v[2] == 0) and odd == 2) {
            cout << "No\n";
        }else if(odd == 2 and even == 1 and v[3] % 2 == 1) {
            cout << "Yes\n";
        }else if((odd == 3 and even == 0) or (odd == 0 and even == 3)) {
            cout << "Yes\n";
        }else if(odd == 1 and even == 2 and v[3] % 2 == 0) {
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }
    }
    
    return 0;
}