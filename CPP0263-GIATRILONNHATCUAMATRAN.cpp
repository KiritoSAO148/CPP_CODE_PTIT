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
    int a[n][n];
    int ans = 0;
    f0 (i, n) f0 (j, n) cin >> a[i][j];
    f0 (i, n){
        f0 (j, n){
            int x = 0, y = 0, k = 0;
            while (k <= i && k <= j && i + k < n && j + k < n){
                x += a[i - k][j - k] + a[i + k][j + k];
                y += a[i - k][j + k] + a[i + k][j - k];
                ans = max(ans, x - y);
                ++k;
            }
            x = 0; y = 0; k = 0;
            while (k <= i && k <= j && i + k + 1 < n && j + k + 1 < n){
                x += a[i - k][j - k] + a[i + k + 1][j + k + 1];
                y += a[i - k][j + k + 1] + a[i + k + 1][j - k];
                ans = max(ans, x - y);
                ++k;
            }
        }
    }
    cout << ans;
    return 0;
}