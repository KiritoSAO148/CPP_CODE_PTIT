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

struct SoPhuc{
	int thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
	SoPhuc res;
	res.thuc = (a.thuc + b.thuc) * (a.thuc + b.thuc) - (a.ao + b.ao) * (a.ao + b.ao);
	res.ao = 2 * (a.thuc + b.thuc) * (a.ao + b.ao);
	return res;
}

void hien_thi(SoPhuc x){
	cout << x.thuc;
	if (x.ao < 0) cout << " - " << x.ao << "i";
	else cout << " + " << x.ao << "i";
}

int main(){
    int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}