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
    cin.ignore();
    string a[n];
    f0 (i, n) getline(cin, a[i]);
    // f0 (i, n) cout << a[i] << '\n';
    int idx = 0;
    vi v;
    vi len;
    f0 (i, n){
        string res = a[i];
        vector <string> tmp;
        string token;
        stringstream ss(res);
        while (ss >> token) tmp.pb(token);
        len.pb(sz(tmp));
    }
    // for (int x : len) cout << x << '\n';
    while (idx < n){
    	if (idx < n && len[idx] == 6){
    		v.pb(1);
    		while (idx < n && len[idx] == 6) idx += 2;
    	}
    	if (idx < n && len[idx] == 7){
    		v.pb(2);
    		idx += 4;
    	}
    }
    cout << sz(v); el;
    f0 (i, sz(v)) cout << v[i] << '\n';
    return 0;
}