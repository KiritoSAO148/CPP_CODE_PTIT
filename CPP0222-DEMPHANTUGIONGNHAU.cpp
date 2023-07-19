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
        int n; cin >> n;
        int a[n][n];
        int max_val = INT_MIN, min_val = INT_MAX;
        f0 (i, n){
            f0 (j, n){
                cin >> a[i][j];
                max_val = max(max_val, a[i][j]);
                min_val = min(min_val, a[i][j]);
            }
        }
        int cnt[100001];
        ms(cnt, 0);
        f0 (i, n){
            set <int> s;
            f0 (j, n) s.insert(a[i][j]);
            for (int x : s) cnt[x]++;
            s.clear();
        }
        int ans = 0;
        for (int i = min_val; i <= max_val; ++i){
            if (cnt[i] == n) ++ans;
        }
        cout << ans; el;
    }
    return 0;
}