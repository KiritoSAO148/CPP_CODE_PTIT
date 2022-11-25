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

long long gcd (long long a, long long b){
	long long r;
	while (b){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long a;
		string b;
		cin >> a >> b;
		long long r=du(b,a);
		cout << gcd(a,r) << endl;
	}
	return 0;
}
