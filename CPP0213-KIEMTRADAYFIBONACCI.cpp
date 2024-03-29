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

int f[20];
map <int, int> mp;

void fibo(){
    f[0]=0; f[1]=1;
    mp[0] = 1;
    mp[1] = 1;
    for (int i=2; i<=17; i++) {
        f[i]=f[i-1]+f[i-2];
        mp[f[i]] = 1;
    }
}

int main(){
    FileIO();
    FastIO;
    fibo();
    TC(){
        int n; cin >> n;
        vi a(n);
        f0 (i, n) cin >> a[i];
        f0 (i, n){
            if (mp[a[i]]) cout << a[i] << ' ';
        }
        el;
    }
    return 0;
}