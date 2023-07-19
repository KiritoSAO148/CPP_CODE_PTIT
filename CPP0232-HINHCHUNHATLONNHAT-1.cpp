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
        int n, m; cin >> n >> m;
        int a[n][m];
        f0 (i, n) f0 (j, m) cin >> a[i][j];
        int hist[n + 1][m + 1];
        f0 (i, m) {
            hist[0][i] = a[0][i];
            for (int j = 1; j < n; ++j) {
                if (a[j][i] == 0) hist[j][i] = 0;
                else hist[j][i] = hist[j - 1][i] + 1;
            }
        }
        for (int i = 0; i < n; ++i){
            int cnt[n + 1] = {0};
            for (int j = 0; j < m; ++j) cnt[hist[i][j]]++;
            int col = 0;
            for (int j = n; j >= 0; --j){
                if (cnt[j] > 0){
                    for (int k = 0; k < cnt[j]; ++k){
                        hist[i][col] = j;
                        ++col;
                    }
                }
            }
        }
        int curr_area, max_area = INT_MIN;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                curr_area = (j + 1) * hist[i][j];
                max_area = max(max_area, curr_area);
            }
        }
        cout << max_area; el;
    }
    return 0;
}