#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

ll du(string a, ll m){
    ll ans = 0;
    f0 (i, sz(a)){
        ans = ans * 10 + a[i] - '0';
        ans %= m;
    }
    return ans;
}

ll powMod(ll a, ll b, ll m){
    if (b == 0) return 1;
    ll x = powMod(a, b / 2, m);
    if (b % 2 == 0) return x * x % m;
    return ((a * x % m) * x % m) % m;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string a; cin >> a;
        ll b, m; cin >> b >> m;
        ll r = du(a, m);
        cout << powMod(r, b, m); el;
    }
    return 0;
}