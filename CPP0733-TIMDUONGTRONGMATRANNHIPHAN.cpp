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
#define maxn 1000

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int n, m, x, y, z, T;
int a[maxn + 1][maxn + 1];
int d[maxn + 1][maxn + 1];

int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};

int bfs (int i, int j){
	if (!a[x][y] || !a[z][T]) return -1;
	queue <pii> q;
	q.push({i, j});
	a[i][j] = 0;
	d[i][j] = 1;
	while (!q.empty()){
		pii top = q.front(); q.pop();
		int i = top.fi, j = top.se;
		//cout << i << ' ' << j; el;
		if (i == z && j == T) return d[i][j] - 1;
		f0 (k,4){
			int i1 = i + dx[k];
			int j1 = j + dy[k];
			if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]){
				d[i1][j1] = d[i][j] + 1;
				a[i1][j1] = 0;
				q.push({i1, j1});
			}
		}
	}
	return -1;
}

int main(){
    FileIO();
    FastIO;
    TC(){
    	cin >> n >> m >> x >> y >> z >> T;
    	++x; ++y; ++z; ++T;
    	f1 (i,n){
    		f1 (j,m) cin >> a[i][j];
    	}
    	ms(d, 0);
    	//cout << x << ' ' << y << ' ' << z << ' ' << T; el;
    	cout << bfs(x, y); el;
    }
    return 0;
}