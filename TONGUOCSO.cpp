#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll tong(ll n){
	ll sum=0;
	for (ll i=1; i<=sqrt(n); i++){
		if (n%i==0){
			if (i!=n/i){
				sum=sum+i+n/i;
			}else{
				sum += i;
			}
		}
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		cout << tong(n) << endl;
	}
	return 0;
}
