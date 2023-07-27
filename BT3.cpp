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
    	int d, m; cin >> d >> m;
    	if (m == 1){
    		if (d < 20) cout << "Ma Ket";
    		else cout << "Bao Binh";
    	}
    	else if (m == 2){
    		if (d < 19) cout << "Bao Binh";
    		else cout << "Song Ngu";
    	}
    	else if (m == 3){
    		if (d < 21) cout << "Song Ngu";
    		else cout << "Bach Duong";
    	}
    	else if (m == 4){
    		if (d < 20) cout << "Bach Duong";
    		else cout << "Kim Nguu";
    	}
    	else if (m == 5){
    		if (d < 21) cout << "Kim Nguu";
    		else cout << "Song Tu";
    	}
    	else if (m == 6){
    		if (d < 21) cout << "Song Tu";
    		else cout << "Cu Giai";
    	}
    	else if (m == 7){
    		if (d < 23) cout << "Cu Giai";
    		else cout << "Su Tu";
    	}
    	else if (m == 8){
    		if (d < 23) cout << "Su Tu";
    		else cout << "Xu Nu";
    	}
    	else if (m == 9){
    		if (d < 23) cout << "Xu Nu";
    		else cout << "Thien Binh";
    	}
    	else if (m == 10){
    		if (d < 23) cout << "Thien Binh";
    		else cout << "Thien Yet";
    	}
    	else if (m == 11){
    		if (d < 23) cout << "Thien Yet";
    		else cout << "Nhan Ma";
    	}
    	else if (m == 12){
    		if (d < 22) cout << "Nhan Ma";
    		else cout << "Ma Ket";
    	}
    	el;
    }
    return 0;
}