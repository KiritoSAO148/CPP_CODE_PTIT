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

int dx[8]={-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8]={-1, 0, 1, 1, 1, 0, -1, -1};

int n, m, a[101][101], cnt;

void dfs (int i, int j){
    a[i][j]=0;
    for (int k = 0; k < 8; ++k){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]) dfs(i1,j1);
    }
}

int main(){
    FileIO();
    FastIO;
    TC(){
        cin >> n >> m;
        f1 (i,n) f1 (j,m) cin >> a[i][j];
        cnt = 0;
        f1 (i, n){
            f1 (j, m){
                if (a[i][j]){
                    ++cnt;
                    dfs(i,j);
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}