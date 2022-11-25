#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int sum (int n){
	int s=0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int smith (int n){
	int m=n, tmp=n;
	int sum1=sum(m), sum2=0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			while (n%i==0){
				sum2+=sum(i);
				n/=i;
			}
		}
	}
	if (n>1) sum2+=sum(n);
	if (n==tmp) return 0;
	return sum1==sum2;
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
		if (smith(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}