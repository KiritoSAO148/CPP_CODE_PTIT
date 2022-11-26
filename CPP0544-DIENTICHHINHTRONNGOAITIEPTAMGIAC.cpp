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
#define PI 3.141592653589793238

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

struct Triangle {
	double a, b, c;
};

bool isValid (Triangle t){
	int x = t.a, y = t.b, z = t.c;
	if (x + y > z && x + z > y && y + z > x) return true;
	return false;
}

double dis (double x1, double y1, double x2, double y2){
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main(){
    FileIO();
    FastIO;
    TC(){
    	double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    	Triangle x;
    	x.a = dis(x1, y1, x2, y2); x.b = dis(x1, y1, x3, y3); x.c = dis(x2, y2, x3, y3);
    	if (!isValid(x)) cout << "INVALID\n";
    	else{
    		double S = 0.25 * sqrt((x.a + x.b + x.c) * (x.a + x.b - x.c) * (x.a + x.c - x.b) * (x.b + x.c - x.a));
            double R = (x.a * x.b * x.c) / (4 * S);
            cout << fixed << setprecision(3) << PI * R * R; el;
    	}
    }
    return 0;
}