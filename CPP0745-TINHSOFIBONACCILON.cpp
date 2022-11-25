#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

struct Matrix{
	ll f[2][2];
};

Matrix operator * (Matrix A, Matrix B){
	Matrix C;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			C.f[i][j]=0;
			for (int k=0; k<2; k++){
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%MOD)%MOD;
			}
		}
	}
	return C;
}

Matrix powmod (Matrix A, int k){
	if (k==1) return A;
	Matrix X = powmod(A,k/2);
	if (k%2==0) return X*X;
	return A*X*X;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		Matrix A;
		A.f[0][0]=1; A.f[0][1]=1; A.f[1][0]=1; A.f[1][1]=0;
		Matrix kq = powmod(A,n);
		cout << kq.f[1][0] << "\n";
	}
	return 0;
}