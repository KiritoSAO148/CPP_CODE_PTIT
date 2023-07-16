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

double calc(double x){
	if (x >= 39) return 9.0;
	if (x >= 37) return 8.5;
	if (x >= 35) return 8.0;
	if (x >= 33) return 7.5;
	if (x >= 30) return 7.0;
	if (x >= 27) return 6.5;
	if (x >= 23) return 6.0;
	if (x >= 20) return 5.5;
	if (x >= 16) return 5.0;
	if (x >= 13) return 4.5;
	if (x >= 10) return 4.0;
	if (x >= 7) return 3.5;
	if (x >= 5) return 3.0;
	if (x >= 3) return 2.5;
	return 1.0;
}

double tinh(double x){
	double point = x - int(x);
	if (point >= 0.75) return int(x) + 1;
	if (point >= 0.25) return int(x) + 0.5;
	return int(x);
}

int main(){
    FileIO();
    FastIO;
    TC(){
    	double x, y, z, t; cin >> x >> y >> z >> t;
    	// cout << x << ' ' << y << ' ' << z << ' ' << t << ' ';
    	double avg = (calc(x) + calc(y) + z + t) / 4.0;
    	// cout << int(avg) << ' ';
    	cout << fixed << setprecision(1) << tinh(avg); el;
    }
    return 0;
}