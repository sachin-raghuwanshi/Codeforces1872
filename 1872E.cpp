#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<int> a(n); 
        int xorzero = 0, xorone = 0;
        vector<int>xorSum(n + 1);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            xorSum[i + 1] = xorSum[i] ^ a[i];
        }
        string s; cin >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                xorzero ^= a[i];
            } else {
                xorone ^= a[i];
            }
        }
        int q; cin >> q;
        while(q--) {
            int x; cin >> x;
            if(x == 2) {
                int g; cin >> g;
                if(g == 0) {
                    cout << xorzero << " ";
                } else {
                    cout << xorone << " ";
                }
            } else {
                int l, r; cin >> l >> r;
                int xorSumLR = xorSum[r] ^ xorSum[l - 1];
                xorone ^= xorSumLR;
                xorzero ^= xorSumLR;
            }
        }
        cout << '\n';
        
    }
}