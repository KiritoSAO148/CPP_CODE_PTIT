#include <bits/stdc++.h>
using namespace std;

int check (string s){
	if (s[0]=='0') return -1;
	set <char> se;
	for (char x : s){
		if (!isdigit(x))
			return -1;
		else
			se.insert(x);
	}
	return se.size()==10;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int res=check(s);
		if (res==-1) cout << "INVALID";
		else if (res==0) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
	return 0;
}
