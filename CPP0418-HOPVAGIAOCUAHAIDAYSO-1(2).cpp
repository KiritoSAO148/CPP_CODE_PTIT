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

int main(){
    FileIO();
    FastIO;
    TC(){
        int n, m; cin >> n >> m;
        vi a(n), b(m);
        f0 (i, n) cin >> a[i];
        f0 (i, m) cin >> b[i];
        vi hop, giao;
        int i = 0, j = 0;
        while (i < n && j < m){
            if (a[i] == b[j]){
                hop.pb(a[i]);
                giao.pb(a[i]);
                ++i; ++j;
            }
            else if (a[i] < b[j]) hop.pb(a[i++]);
            else hop.pb(b[j++]);
        }
        while (i < n) hop.pb(a[i++]);
        while (j < m) hop.pb(b[j++]);
        for (int x : hop) cout << x << ' ';
        el;
        for (int x : giao) cout << x << ' ';
        el;
    }
    return 0;
}