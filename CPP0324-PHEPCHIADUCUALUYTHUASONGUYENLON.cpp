#include <bits/stdc++.h>
using namespace std;

long long du (string a, long long m){
	long long res=0;
	for (char x : a){
		res=res*10+x-'0';
		res%=m;
	}
	return res;
}

long long powMod (long long a, long long b, long long m){
	long long res=1;
	while (b){
		if (b%2==1){
			res*=a;
			res%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string a;
		long long b,m;
		cin >> a >> b >> m;
		long long r=du(a,m);
		cout << powMod(r,b,m);
		cout << endl;
	}
	return 0;
}
