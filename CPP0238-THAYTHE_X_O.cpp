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

int n, m;

void floodFill(char a[][25], int i, int j, char prevV, char newV){
    if (i < 0 || i >= n || j < 0 || j >= m) return;
    if (a[i][j] != prevV) return;
    a[i][j] = newV;
    floodFill(a, i + 1, j, prevV, newV);
    floodFill(a, i - 1, j, prevV, newV);
    floodFill(a, i, j + 1, prevV, newV);
    floodFill(a, i, j - 1, prevV, newV);
}

void solve(char a[][25]){
    f0 (i, n){
        f0 (j, m){
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1){
                if (a[i][j] == 'O') floodFill(a, i, j, 'O', '-');
            }
        }
    }
    f0 (i, n){
        f0 (j, m){
            if (a[i][j] == 'O') a[i][j] = 'X';
            else if (a[i][j] == '-') a[i][j] = 'O';
        }
    }
}

int main(){
    FileIO();
    FastIO;
    TC(){
        cin >> n >> m;
        char a[n][25];
        f0 (i, n) f0 (j, m) cin >> a[i][j];
        solve(a);
        f0 (i, n){
            f0 (j, m) cout << a[i][j] << ' ';
            el;
        }
    }
    return 0;
}