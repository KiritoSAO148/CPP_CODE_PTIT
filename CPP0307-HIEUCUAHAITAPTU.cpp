#include <bits/stdc++.h>
using namespace std;

set<string> convert (string s){
	stringstream ss(s);
	set<string>se;
	string tmp;
	while (ss >> tmp){
		se.insert(tmp);
	}
	return se;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s1,s2;
		getline (cin,s1);
		getline (cin,s2);
		set<string> se1=convert(s1);
		set<string> se2=convert(s2);
		for (string x : se1){
			if (se2.find(x) == se2.end()){
				cout << x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
