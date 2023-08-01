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
        vi a(n);
        f0 (i, n) cin >> a[i];
        int k, x; cin >> k >> x;
        int l = 0, r = 0;
        int it = lower_bound(all(a), x) - begin(a);
        if (a[it] == x){
            l = it - 1;
            r = it + 1;
        }else{
            r = it;
            l = it - 1;
        }
        for (int i = k / 2 - 1; i >= 0; --i) cout << a[l - i] << ' ';
        for (int i = 0; i < k / 2; ++i) cout << a[r + i] << ' ';
        el;
    }
    return 0;
}