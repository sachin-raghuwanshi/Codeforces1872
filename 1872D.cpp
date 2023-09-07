#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1000000007;
ll __gcd(ll a, ll b) {
    if(b == 0) {
        return a;
    }
    return __gcd(b, a % b);
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--)
    {
        ll n, x, y; cin >> n >> x >> y;
        ll divx = n / x;
        ll divy = n / y;
        ll lcm = (x * y) / __gcd(x, y);
        ll divlcm = n / lcm;
        divx -= divlcm;
        divy -= divlcm; 
        ll ans = 0;
        ans = (divx * (2 * n - divx + 1)) / 2 - (divy * (divy + 1)) / 2;
        cout << ans << endl;
    }
}