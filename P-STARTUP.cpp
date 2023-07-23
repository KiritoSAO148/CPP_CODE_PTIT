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

struct baiThi{
	int tt;
	int share;
	int like;
};

double tinh(baiThi x){
	return x.share * 0.7 + x.like * 0.3;
}

bool cmp(baiThi a, baiThi b){
	double tinhA = tinh(a);
	double tinhB = tinh(b);
	return tinhA > tinhB;
}

int main(){
    FileIO();
    FastIO;
    int n; cin >> n;
    baiThi a[n];
    f0 (i, n) cin >> a[i].tt >> a[i].share >> a[i].like;
    sort(a, a + n, cmp);
    f0 (i, 7) cout << a[i].tt << ' ';
    return 0;
}