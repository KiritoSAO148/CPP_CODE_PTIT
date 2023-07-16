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

int sum(int n){
	int s = 0;
	while (n){
		s += n % 10;
		n /= 10;
	}
	return s;
}

bool smith(int n){
	int m = n;
	int sum1 = sum(m), sum2 = 0;
	for (int i = 2; i <= sqrt(n); ++i){
		while (n % i == 0){
			sum2 += sum(i);
			n /= i;
		}
	}
	if (n > 1) sum2 += sum(n);
	return sum1 == sum2;
}

int main(){
    FileIO();
    FastIO;
    int n; cin >> n;
    if (smith(n)) cout << "YES";
    else cout << "NO";
    return 0;
}