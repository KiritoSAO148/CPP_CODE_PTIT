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

vl hh;

int prime (int n){
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0) return 0;
    }
    return 1;
}

void sieve(){
    for (int i = 2; i <= 31; ++i){
        if (prime(i)){
            int x = (ll) pow(2, i) - 1;
            if (prime(x)){
                ll tmp = x * (ll) pow(2, i - 1);
                hh.pb(tmp);
            }
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    FastIO;
    sieve();
    TC(){
        ll n; cin >> n;
        int ok = 0;
        for (int i = 0; i < sz(hh); ++i){
            if (n == hh[i]){
                ok = 1;
                break;
            }
        }
        cout << ok; el;
    }
    return 0;
}