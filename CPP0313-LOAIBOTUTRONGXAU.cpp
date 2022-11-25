#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	string word;
	cin >> word;
	stringstream ss(s);
	string token;
	while (ss >> token){
		if (word != token)
			cout << token << " ";
	}
	return 0;
}
