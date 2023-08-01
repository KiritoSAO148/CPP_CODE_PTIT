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
        string a, b; cin >> a >> b;
        while (sz(a) < sz(b)) a = "0" + a;
        while (sz(b) < sz(a)) b = "0" + b;
        if (a < b) swap(a, b);
        int n = sz(a);
        int nho = 0;
        string ans = "";
        for (int i = n - 1; i >= 0; --i){
            int res = (a[i] - '0') - (b[i] - '0') - nho;
            if (res < 0){
                ans = char(res + 10 + '0') + ans;
                nho = 1;
            }else{
                ans = char(res + '0') + ans;
                nho = 0;
            }
        }
        cout << ans; el;
    }
    return 0;
}