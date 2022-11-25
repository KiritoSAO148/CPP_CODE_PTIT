#include <bits/stdc++.h>
using namespace std;

bool check (string s){
	string t = s;
	reverse (s.begin(),s.end());
	if (t!=s)
		return false;
	for (char x : s){
		if ((x-'0')%2==1)
			return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		if (check(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
