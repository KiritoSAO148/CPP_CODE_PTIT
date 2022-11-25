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

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		if (du(s,11)==0){
			cout << "1";
		}else{
			cout << "0";
		}
		cout << endl;
	}
	return 0;
}
