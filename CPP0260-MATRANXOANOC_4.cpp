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
    int n; cin >> n;
    vi a;
    f0 (i, n){
        f0 (j, n){
            int x; cin >> x;
            a.pb(x);
        }
    }
    sort(all(a));
    int mat[n][n];
    int idx = 0, h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while (1){
        if (c1 > c2) break;
        for (int i = c1; i <= c2; ++i) mat[h1][i] = a[idx++];
        ++h1;
        if (h1 > h2) break;
        for (int i = h1; i <= h2; ++i) mat[i][c2] = a[idx++];
        --c2;
        if (c1 > c2) break;
        for (int i = c2; i >= c1; --i) mat[h2][i] = a[idx++];
        --h2;
        if (h1 > h2) break;
        for (int i = h2; i >= h1; --i) mat[i][c1] = a[idx++];
        ++c1;
    }
    f0 (i, n) {
        f0 (j, n) cout << mat[i][j] << ' ';
        el;
    }
    return 0;
}