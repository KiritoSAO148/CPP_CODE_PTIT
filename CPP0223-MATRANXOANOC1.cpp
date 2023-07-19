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
        int a[n][m];
        f0 (i, n) f0 (j, m) cin >> a[i][j];
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        int mat[n][m];
        while (1){
            if (c1 > c2) break;
            for (int i = c1; i <= c2; ++i) cout << a[h1][i] << ' ';
            ++h1;
            if (h1 > h2) break;
            for (int i = h1; i <= h2; ++i) cout << a[i][c2] << ' ';
            --c2;
            if (c1 > c2) break;
            for (int i = c2; i >= c1; --i) cout << a[h2][i] << ' ';
            --h2;
            if (h1 > h2) break;
            for (int i = h2; i >= h1; --i) cout << a[i][c1] << ' ';
            ++c1;
        }
        el;
    }
    return 0;
}