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

int n, k, a[25][25], ans;

int dx[2]={1,0};
int dy[2]={0,1};

void Try (int i, int j, int sum){
	if (i == n && j == n && sum == k){
		++ans;
		return;
	}
	//cout << i << ' ' << j; el;
	f0 (m,2){
		int i1 = i + dx[m];
		int j1 = j + dy[m];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && sum + a[i1][j1] <= k) Try(i1, j1, sum + a[i1][j1]);
	}
}

int main(){
    FileIO();
    FastIO;
    TC(){
    	cin >> n >> k;
    	f1 (i,n) f1 (j,n) cin >> a[i][j];
    	ans = 0;
    	Try(1, 1, a[1][1]);
    	cout << ans; el;
    }
    return 0;
}