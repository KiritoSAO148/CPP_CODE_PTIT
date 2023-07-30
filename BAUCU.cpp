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
    int M, N; cin >> M >> N;
    vi a(M);
    map <int, int> mp;
    f0 (i, M) cin >> a[i], mp[a[i]]++;
    int max_val1 = INT_MIN, max_val2 = INT_MIN, ok = 0, ans = 0;
    for (auto it : mp) max_val1 = max(max_val1, it.se);
    for (auto it : mp){
    	if (it.se > max_val2 && it.se < max_val1){
    		max_val2 = it.se;
    		ans = it.fi;
    		ok = 1;
    	}
    }
    if (!ok) cout << "NONE";
    else cout << ans;
    return 0;
}