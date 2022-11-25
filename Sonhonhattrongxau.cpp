#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(string s){
	ll res=INT_MAX;
	ll sum=0;
	for (char x : s){
		if (isdigit(x)){
			sum = sum * 10 + x - '0';
		}
		else{
			res=min(res,sum);
			sum=0;
		}
	}
	res=min(res,sum);
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		solve(s);
	}
	return 0;
}
