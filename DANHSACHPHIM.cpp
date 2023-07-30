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

struct Phim{
	string maphim;
	string theloaiphim;
	string ngay;
	string ten;
	int sotap;
};

bool cmp(Phim a, Phim b){
	string date1 = a.ngay, date2 = b.ngay;
	int day1 = stoi(date1.substr(0, 2)), month1 = stoi(date1.substr(3, 5)), year1 = stoi(date1.substr(6));
	int day2 = stoi(date2.substr(0, 2)), month2 = stoi(date2.substr(3, 5)), year2 = stoi(date2.substr(6));
	if (year1 != year2) return year1 < year2;
	if (month1 != month2) return month1 < month2;
	if (day1 != day2) return day1 < day2;
	if (a.ten != b.ten) return a.ten < b.ten;
	return a.sotap > b.sotap;
}

int main(){
    FileIO();
    FastIO;
    int n, m; cin >> n >> m;
    cin.ignore();
    map <string, string> theloai;
    for (int i = 1; i <= n; ++i){
    	string s; getline(cin, s);
    	string ma = to_string(i);
    	while (sz(ma) < 3) ma = "0" + ma;
    	ma = "TL" + ma;
    	theloai[ma] = s;
    }
    Phim a[m + 1];
    for (int i = 1; i <= m; ++i){
    	string maphim = to_string(i);
    	while (sz(maphim) < 3) maphim = "0" + maphim;
    	maphim = "P" + maphim;
    	a[i].maphim = maphim;
    	string theloaip; getline(cin, theloaip);
    	a[i].theloaiphim = theloai[theloaip];
    	getline(cin, a[i].ngay);
    	getline(cin, a[i].ten);
    	cin >> a[i].sotap;
    	cin.ignore();
    }
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; ++i)
    	cout << a[i].maphim << ' ' << a[i].theloaiphim << ' ' << a[i].ngay << ' ' << a[i].ten << ' ' << a[i].sotap << '\n';
    return 0;
}