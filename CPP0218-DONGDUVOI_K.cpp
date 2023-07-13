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
        int min_val = INT_MAX, max_val = INT_MIN;
        f0 (i, n){
            cin >> a[i];
            min_val = min(min_val, a[i]);
            max_val = max(max_val, a[i]);
        }
        int d = max_val - min_val;
        //if (d == 0) return cout << "No solution\n", 0;
        vi divisors;
        f1 (i, sqrt(d)){
            if (d % i == 0){
                divisors.pb(i);
                if (i != d / i) divisors.pb(d / i);
            }
        }
        int cnt = 0;
        f0 (i, sz(divisors)){
            int x = a[0] % divisors[i];
            bool ok = true;
            for (int j = 1; j < sz(a); ++j){
                if (a[j] % divisors[i] != x){
                    ok = false;
                    break;
                }
            }
            if (ok) ++cnt;
        }
        cout << cnt; el;
    }
    return 0;
}