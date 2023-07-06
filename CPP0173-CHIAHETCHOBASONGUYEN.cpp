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

ll gcd (ll a, ll b){
    if (b==0) return a;
    return gcd(b,a%b);
}

ll lcm (ll a, ll b){
    return a/gcd(a,b)*b;
}

ll solve(ll x, ll y, ll z, ll n){
    ll res = lcm(lcm(x, y), z);
    ll ans = ((ll)pow(10, n - 1) + res - 1) / res * res;
    if (ans < pow(10, n)) return ans;
    return -1;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        ll x, y, z, n; cin >> x >> y >> z >> n;
        cout << solve(x, y, z, n); el;
    }
    return 0;
}