#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		map <char,int>mp;
		for (char x : s)
			mp[x]++;
		for (char x : s){
			if (mp[x]==1)
			 cout << x;
		}
		cout << endl;
	}
	return 0;
}
