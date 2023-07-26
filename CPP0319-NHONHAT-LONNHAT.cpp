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

void solve(int m, int s){
    if (9 * m < s){
        cout << "-1 -1";
        return;
    }
    if (m > 1 && s == 0){
        cout << "-1 -1";
        return;
    }
    int lon[m] = {0}, be[m] = {0};
    int tmp = s;
    f0 (i, m){
        if (tmp >= 9){
            lon[i] = 9;
            tmp -= 9;
        }
        else if (tmp != 0){
            lon[i] = tmp;
            tmp = 0;
        }
    }
    --s;
    for (int i = m - 1; i >= 1; --i){
        if (s >= 9){
            be[i] = 9;
            s -= 9;
        }
        else if (s != 0){
            be[i] = s;
            s = 0;
        }
    }
    be[0] = s + 1;
    f0 (i, m) cout << be[i];
    cout << ' ';
    f0 (i, m) cout << lon[i];
}

int main(){
    FileIO();
    FastIO;
    int m, s; cin >> m >> s;
    solve(m, s);
    return 0;
}