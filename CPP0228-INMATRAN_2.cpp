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
        int m = 8 * n * n; //size of each coil
        int coil1[m], coil2[m];
        coil1[0] = 8 * n * n + 2 * n;
        int curr = coil1[0];
        int nflg = 1, step = 2;
        int idx = 1;
        while (idx < m){
            for (int i = 0; i < step; ++i){
                curr = coil1[idx++] = (curr - 4*n*nflg);
                if (idx >= m) break;
            }
            if (idx >= m) break;
            for (int i = 0; i < step; ++i){
                curr = coil1[idx++] = curr + nflg;
                if (idx >= m) break;
            }
            nflg = nflg * (-1);
            step += 2;
        }
        for (int i = 0; i < 8 * n * n; ++i) coil2[i] = 16 * n * n + 1 - coil1[i];
        for (int x : coil1) cout << x << ' ';
        el;
        for (int x : coil2) cout << x << ' ';
        el;
    }
    return 0;
}