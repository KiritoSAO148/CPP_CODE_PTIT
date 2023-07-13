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
        int max_idx = 0;
        vi leftMin(n);
        leftMin[0] = a[0];
        for (int i = 1; i < n; ++i) leftMin[i] = min(leftMin[i - 1], a[i]);
        int i = n - 1, j = n - 1;
        while (i >= 0 && j >= 0){
            if (leftMin[i] <= a[j]){
                max_idx = max(max_idx, j - i);
                --i;
            }
            else --j;
        }
        // vi rightMax(n);
        // rightMax[n - 1] = a[n - 1];
        // for (int i = n - 2; i >= 0; --i) rightMax[i] = max(rightMax[i + 1], a[i]);
        // for (int i = 0; i < n; ++i) cout << rightMax[i] << ' ';
        // int i = 0, j = 0;
        // while (i < n && j < n){
        //     if (rightMax[j] >= a[i]){
        //         max_idx = max(max_idx, j - i);
        //         ++j;
        //     }
        //     else ++i;
        // }
        cout << max_idx; el;
    }
    return 0;
}