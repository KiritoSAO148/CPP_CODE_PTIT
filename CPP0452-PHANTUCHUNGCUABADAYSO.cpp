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
        int n, m, p; cin >> n >> m >> p;
        ll a[n], b[m], c[p];
        f0 (i, n) cin >> a[i];
        f0 (i, m) cin >> b[i];
        f0 (i, p) cin >> c[i];
        int ok = 0;
        int i = 0, j = 0, k = 0;
        while (i < n && j < m && k < p){
            if (a[i] == b[j] && b[j] == c[k]){
                cout << a[i] << ' ';
                ok = 1;
                ++i; ++j; ++k;
            }
            else if (a[i] <= b[j] && a[i] <= c[k]) ++i;
            else if (b[j] <= a[i] && b[j] <= c[k]) ++j;
            else if (c[k] <= a[i] && c[k] <= b[j]) ++k;
        }
        if (!ok) cout << "-1";
        cout << '\n';
    }
    return 0;
}